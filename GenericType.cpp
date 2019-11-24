// 2019, 11/24, 20:50, by Queenie
// 泛型
// 抽取演算法


// 加入的操作如下：
// 利用等於 = 賦予初始值
// 加法運算取得當前數值
// return 傳回結果

// Ｔ sum(data)
// {
//     T t = 0;
//     while (not at end){ // 尚未抵達尾端
//         t = t + current value // 取得當前數值
//         get next data element // 取得下一個資料元素
//     }

//     return t;
// }


// 實際加入的操作：
// != 比較以檢查是否抵達序列尾端
// * 存取當前數值
// ++ 往下一個元素移動

// 模板可支持泛型
template<typename Iter, typename Val>
Val sum(Iter first, Iter last)
{
    val v = 0;
    while(first !=last){
        v = v + *first;
        ++first;
    }
    return v;
}
