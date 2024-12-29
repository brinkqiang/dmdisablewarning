
// Copyright (c) 2018 brinkqiang (brink.qiang@gmail.com)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef __DMDISABLEWARNNING_H_INCLUDE__
#define __DMDISABLEWARNNING_H_INCLUDE__

#ifdef _MSC_VER  // 针对 MSVC 编译器
    #define DISABLE_ALL_WARNINGS \
        __pragma(warning(push, 0))

#elif defined(__GNUC__) || defined(__clang__)  // 针对 GCC 和 Clang 编译器
    #define DISABLE_ALL_WARNINGS \
        _Pragma("GCC diagnostic push") \
        _Pragma("GCC diagnostic ignored \"-Wall\"") \
        _Pragma("GCC diagnostic ignored \"-Wextra\"") \
        _Pragma("GCC diagnostic ignored \"-Wdeprecated\"")  // 你可以根据需要增加其他警告类型
        
#endif

// 恢复警告的宏定义
#ifdef _MSC_VER  // 针对 MSVC 编译器
    #define ENABLE_ALL_WARNINGS \
        __pragma(warning(pop))

#elif defined(__GNUC__) || defined(__clang__)  // 针对 GCC 和 Clang 编译器
    #define ENABLE_ALL_WARNINGS \
        _Pragma("GCC diagnostic pop")

#endif

#endif // __DMDISABLEWARNNING_H_INCLUDE__