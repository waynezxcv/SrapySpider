/*
 Copyright (c) 2017 waynezxcv <liuweiself@126.com>
 
 https://github.com/waynezxcv/Playground
 
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 */





#ifndef HeapSort_hpp
#define HeapSort_hpp

#include "MaxHeap.hpp"



namespace LWTL {
    
    //给数组a[1:n]排序
    template <typename T>
    void heapSort(T* a,int n) {
        
        MaxHeap<T> heap (1);
        heap.initialize(a,n);
        
        for (int i = n - 1; i > 0; i --) {
            T x = heap.top();//查询优先级最高的元素
            heap.pop();//移出队列
            a[i + 1] = x;
        }
        heap.deactivateArray();//将heap指向NULL，防止heap的析构函数将数组a删除
    }
}

#endif /* HeapSort_hpp */
