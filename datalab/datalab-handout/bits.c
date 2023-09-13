/* 
 * CS:APP Data Lab 
 * 
 * <请输入你的名字和学号>
 * 
 * bits.c - 本实验的源文件.
 *          请将本文件提交给你的导师.
 *
 * WARNING: 不要 include <stdio.h> 头文件; 因为这样的引用会让你的 dlc 
 * 编译器很懵逼。不引用 <stdio.h> 你依旧能使用 printf 函数，虽然你会得到
 * 编译器的 warning 警告。一般来说，无视编译器的 warning 不是个好习惯，
 * 但是这次 OK：）
 *
 */

#if 0
/*
 * 给学生的建议：
 *
 * STEP 1: 仔细阅读下面指导建议
 */

你需要编辑本源文件的函数并提交给the Data Lab


整数编程规则：
 
  用一行或多行代码实现函数功能，替换掉 "return" 语句，
  你的代码需要遵守下面的代码风格：
 
  int Funct(arg1, arg2, ...) {
      /* 一个代码风格的简要描述 */
      int var1 = Expr1;
      ...
      int varM = ExprM;

      varJ = ExprJ;
      ...
      varN = ExprN;
      return ExprR;
  }

  每个 "Expr" 是一个表达式，表达式只允许使用下面规则:
  1. 常整数 0 到 255 (0xFF) 可以用. 更大的就不行了，如 0xffffffff.
  2. 不要使用全局变量，只能用函数参数和局部变量.
  3. 一元整数运算符 ! ~
  4. 二进制整数操作符 & ^ | + << >>
    
  整数问题的其中一些严格限制了允许使用运算符的种类。你可以在每个 "Expr" 中使用多个运算符。

  禁止做以下事情:
  1. 使用任何控制语句如：if, do, while, for, switch, 等.
  2. 定义或使用任何宏.
  3. 在文件内定义额外的函数.
  4. 调用任何函数.
  5. 使用其它操作符，如： &&, ||, -, ?:
  6. 使用强制类型转换.
  7. 使用除 int 以外的任何数据类型. 

 
  你的机器需要是 32 位机，至少用 32 位 gcc 编译器:
  1. 使用 2 进制补码, 32 位来表示整数 int 形.
  2. 右移操作是算术右移，而不是逻辑右移.
  3. 当移位操作移动位数小于 0 或大于 31 时会出现不可预测的后果.


符合规范的代码风格样例:
  /*
   * pow2plus1 - returns 2^x + 1, where 0 <= x <= 31
   */
  int pow2plus1(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     return (1 << x) + 1;
  }

  /*
   * pow2plus4 - returns 2^x + 4, where 0 <= x <= 31
   */
  int pow2plus4(int x) {
     /* exploit ability of shifts to compute powers of 2 */
     int result = (1 << x);
     result += 4;
     return result;
  }

浮点数编程规则

这类问题要求你实现浮点数运算，编程规则相对不那么严格。你可以使用循环、条件语句。
你能够使用任意大小的 int 和 unsigned int 常数，你也可以任意使用，算术、逻辑、比较运算符。

禁止做以下事项:
  1. 定义宏.
  2. 调用本文件内的其它函数.
  3. 调用函数.
  4. 使用任何强制类型转换.
  5. 使用除int、unsigned 以外的其它数据类型.  也就是说你不能使用数组、struct、union.
  6. 使用任何浮点数类型、操作以及常数.


注意:
  1. 使用 dlc (data lab checker) 程序来检查你提交方案是否符合规范。
  2. 每个函数都用操作符数目上限（ = 并不计算在内）。
  3. 使用 btest 来检查你的函数能否正确允许.
  4. 每个函数所允许的最大操作符数在每个函数的上面。

/*
 * STEP 2: 根据编码规则来编写接下来的函数.
 * 
 */


#endif
//1
/* 
 * bitXor - x^y using only ~ and & 
 *   Example: bitXor(4, 5) = 1
 *   Legal ops: ~ &
 *   Max ops: 14
 *   Rating: 1
 */
int bitXor(int x, int y) {
  return 2;
}
/* 
 * tmin - return minimum two's complement integer 
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 4
 *   Rating: 1
 */
int tmin(void) {

  return 2;

}
//2
/*
 * isTmax - returns 1 if x is the maximum, two's complement number,
 *     and 0 otherwise 
 *   Legal ops: ! ~ & ^ | +
 *   Max ops: 10
 *   Rating: 1
 */
int isTmax(int x) {
  return 2;
}
/* 
 * allOddBits - 所有二进制偶数位都为 1 时返回 1
 *   where bits are numbered from 0 (least significant) to 31 (most significant)
 *   Examples allOddBits(0xFFFFFFFD) = 0, allOddBits(0xAAAAAAAA) = 1
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 2
 */
int allOddBits(int x) {
  return 2;
}
/* 
 * negate - return -x 
 *   Example: negate(1) = -1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 5
 *   Rating: 2
 */
int negate(int x) {
  return 2;
}
//3
/* 
 * isAsciiDigit - return 1 if 0x30 <= x <= 0x39 (ASCII codes for characters '0' to '9')
 *   Example: isAsciiDigit(0x35) = 1.
 *            isAsciiDigit(0x3a) = 0.
 *            isAsciiDigit(0x05) = 0.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 15
 *   Rating: 3
 */
int isAsciiDigit(int x) {
  return 2;
}
/* 
 * conditional - same as x ? y : z 
 *   Example: conditional(2,4,5) = 4
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 16
 *   Rating: 3
 */
int conditional(int x, int y, int z) {
  return 2;
}
/* 
 * isLessOrEqual - if x <= y  then return 1, else return 0 
 *   Example: isLessOrEqual(4,5) = 1.
 *   Legal ops: ! ~ & ^ | + << >>
 *   Max ops: 24
 *   Rating: 3
 */
int isLessOrEqual(int x, int y) {
  return 2;
}
//4
/* 
 * logicalNeg - implement the ! operator, using all of 
 *              the legal operators except !
 *   Examples: logicalNeg(3) = 0, logicalNeg(0) = 1
 *   Legal ops: ~ & ^ | + << >>
 *   Max ops: 12
 *   Rating: 4 
 */
int logicalNeg(int x) {
  return 2;
}
/* howManyBits - return the minimum number of bits required to represent x in
 *             two's complement
 *  Examples: howManyBits(12) = 5
 *            howManyBits(298) = 10
 *            howManyBits(-5) = 4
 *            howManyBits(0)  = 1
 *            howManyBits(-1) = 1
 *            howManyBits(0x80000000) = 32
 *  Legal ops: ! ~ & ^ | + << >>
 *  Max ops: 90
 *  Rating: 4
 */
int howManyBits(int x) {
  return 0;
}
//float
/* 
 * floatScale2 - Return bit-level equivalent of expression 2*f for
 *   floating point argument f.
 *   Both the argument and result are passed as unsigned int's, but
 *   they are to be interpreted as the bit-level representation of
 *   single-precision floating point values.
 *   When argument is NaN, return argument
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
unsigned floatScale2(unsigned uf) {
  return 2;
}
/* 
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf) {
  return 2;
}
/* 
 * floatPower2 - Return bit-level equivalent of the expression 2.0^x
 *   (2.0 raised to the power x) for any 32-bit integer x.
 *
 *   The unsigned value that is returned should have the identical bit
 *   representation as the single-precision floating-point number 2.0^x.
 *   If the result is too small to be represented as a denorm, return
 *   0. If too large, return +INF.
 * 
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. Also if, while 
 *   Max ops: 30 
 *   Rating: 4
 */
unsigned floatPower2(int x) {
    return 2;
}
