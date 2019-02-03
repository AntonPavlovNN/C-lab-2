#include "task1.h"
#include "task2.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

#include "gtest/gtest.h"
#include <string.h>

TEST(task1, bomb_height)
{
	ASSERT_NEAR(4995.1,height(1,5000),0.1);
	ASSERT_NEAR(4509.5,height(10,5000),0.1);
    ASSERT_NEAR(286.3,height(31,5000),0.1);
}

TEST(task2, check_turn)
{
	ASSERT_EQ(0,turn(60,60));
    ASSERT_LT(0,turn(70,60));
    ASSERT_GT(0,turn(30,60));
}

TEST(task3, triange)
{
    char buf[256];
    ASSERT_STREQ("  *",layout(buf,1,3));
    ASSERT_STREQ(" ***",layout(buf,2,3));
	ASSERT_STREQ("*****",layout(buf,3,3));
}



TEST(task4, check_permutation1)
{
    char buf[512]="a1b2c3d4e";
	ASSERT_STREQ("aebdc3241",process(buf));
}
TEST(task4, check_permutation2)
{
    char buf[512]="1324abcdefg";
    ASSERT_STREQ("gfedabc4231",process(buf));
}

TEST(task5, passwd_len)
{
    char buf[512];
    ASSERT_EQ(8,strlen(password(buf)));
}

TEST(task5,passwd_digits)
{
    char buf[512];
    password(buf);
    int i=0,count=0;
    while(buf[i])
    {
        if(buf[i]>='0' && buf[i]<='9')
            count++;
        i++;
    }
    ASSERT_LT(0,count);    
}
TEST(task5,passwd_letters)
{
    char buf[512];
    password(buf);
    int i=0,count=0;
    while(buf[i])
    {
        if(buf[i]>='a' && buf[i]<='z')
            count++;
        i++;
    }
    ASSERT_LT(0,count);    
}
TEST(task5,passwd_upper_letters)
{
    char buf[512];
    password(buf);
    int i=0,count=0;
    while(buf[i])
    {
        if(buf[i]>='A' && buf[i]<='Z')
            count++;
        i++;
    }
    ASSERT_LT(0,count);    
}

TEST(task6, clear1)
{
    char buf[]="    qwer    ty uio p  ";
    ASSERT_STREQ("qwer ty uio p",clear(buf));
}
TEST(task6, clear2)
{
    char buf[]="qwer ty uio p";
    ASSERT_STREQ("qwer ty uio p",clear(buf));
}