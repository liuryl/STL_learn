//
// Created by 刘日一郎 on 2023/3/23.
//
//map是一种并联式容器，特点是增加或删除时对容器内部影响较小，只可以修改实值不能修改key，key唯一
//map对象是模板类，需要关键字和存储对象两个参数  std::map<int,string >personnal,int为索引，string为数据，personnal为map的名字

#include "iostream"
#include "map"
#include "string"

using namespace std;

/*insert插入*/
//int main(){
//    map<int ,string >mapstudent;
////    插入pair数据
//    mapstudent.insert(pair<int,string>(1,"student_ont"));
//    mapstudent.insert(pair<int,string>(2,"student_two"));
//    mapstudent.insert(pair<int,string>(3,"student_three"));
////    iterator是一种迭代器检查容器中的元素并遍历,遍历map中的元素
//    map<int,string >::iterator iter;
//    for (iter=mapstudent.begin();  iter!=mapstudent.end() ; iter++) {
////        输出iter中一组元素的第一个+空格+第二个元素，结束
//        cout<<iter->first<<' '<<iter->second<<endl;
//    }
//}

//int main(){
//    map<int ,string >mapstudent;
////插入value——type数据
//    mapstudent.insert(map<int,string>::value_type (1,"2student_one"));
//    mapstudent.insert(map<int,string>::value_type (2,"2student_two"));
//    mapstudent.insert(map<int,string>::value_type (3,"2student_three"));
//
//    map<int,string >::iterator iter;
//
//    for (iter=mapstudent.begin(); iter!=mapstudent.end() ; iter++) {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//}


//int main(){
//    map<int ,string> mapstudent3;
////    对mapstuden3进行赋值根据关键字赋值
//    mapstudent3[1] = "3student_one";
//    mapstudent3[2] = "3student_two";
//    mapstudent3[3] = "3student_three";
//
//    map<int ,string >::iterator iter;
//
//    for (iter=mapstudent3.begin(); iter != mapstudent3.end() ; iter++) {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//}


////mapstudent.insert(map<int,string>::value_type (1,"2student_one"));
////mapstudent.insert(map<int,string>::value_type (1,"3student_one"));
/// 对map中同一位置进行赋值时第二条并不会生效，输出仍是2student
////可以使用pair进行判断值的插入是否成功
////pair<map<int,string>::iterator,bool>Insert_Pair;
////Insert_Pair=mapstudent.insert(map<int,string>::value_type (1,"3student_one"));
//int main(){
//    map<int,string > mapstudent;
//
////pair用来判断插入的值是否成功插入，如果插入之前就有值则不进行操作并返回false
//    pair<map<int,string>::iterator,bool> Insert_pair;
////    mapstudent中插入值，如果之前为空插入并返回1，之前有数据则不执行操作并返回false
//    Insert_pair = mapstudent.insert(pair<int,string>(1,"student_one_3"));
//    if(Insert_pair.second== true)
//        cout<<"Insert Successfully"<<endl;
//    else
//        cout<<"Failed"<<endl;
//    Insert_pair = mapstudent.insert(pair<int,string>(1,"student_two"));
//
//    if (Insert_pair.second== true)
//        cout<<"successfully"<<endl;
//    else
//        cout<<"failed"<<endl;
//
//    map<int,string >::iterator iter;
//    for (iter=mapstudent.begin();  iter!=mapstudent.end() ; iter++) {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//}

//int main(){
//    map<int ,string > mapstudent;
//
//    mapstudent[1]="student_1";
//    mapstudent[1]="student_2";
//    mapstudent[2]="student_3";
//    //前向迭代器
//    map<int,string>::iterator iter;
//    for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)
//    {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//
//
//////输出map大小
//    int nsize=mapstudent.size();
//    cout<<nsize<<endl;
//}


////数据遍历
////法向迭代器遍历
//int main(){
//    map<int ,string > mapstudent;
//
//    mapstudent.insert(pair<int,string>(1,"student1"));
//    mapstudent.insert(map<int,string>::value_type(2,"student_2"));
//    mapstudent.insert(pair<int,string>(3,"student_3"));
//
//    map<int ,string>::reverse_iterator iter;
////注意begin和end要反向
//    for (iter = mapstudent.rbegin();iter!=mapstudent.rend();iter++)
//    {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//}

////使用数组
//int main(){
//    map<int ,string> mapstudent;
//    mapstudent.insert(pair<int,string>(1,"student_1"));
//    mapstudent.insert(pair<int,string>(2,"student_2"));
//    mapstudent.insert(pair<int,string>(3,"student_3"));
//
//    int size_num = mapstudent.size();
//
//    for (int nindex = 1; nindex <= size_num; nindex++) {
////        使用数组方式访问
//        cout<<mapstudent[nindex]<<endl;
//    }
//}


////查找并获取map中的元素（包括判定元素是否存在）
////共三种方法1：使用count函数判断关键字是否存在，缺点是无法定位，返回值只有0或1
////        2：使用find定位数据出现，返回一个迭代器，若有关键字返回关键字所在位置的迭代器,否则返回end
////        3：使用low_bound和upper_bound,equal_range进行判断，若map中已经插入值，当low_bound（2）时返回的是2low_bound（3）返回的是3
////           equal_range返回一个pair，pair中两个值相同则没有相应的值
//int main(){
//    map<int ,string> studentmap;
//
//    studentmap.insert(pair<int,string>(1,"student_11"));
//    studentmap.insert(pair<int,string>(2,"student_22"));
//    studentmap.insert(pair<int,string>(3,"student_33"));
//
//    map<int,string>::iterator iter;
////    使用find查找
//    iter=studentmap.find(2);
//    if (iter!=studentmap.end())
//        cout<<"find the value is"<<iter->second<<endl;
//    else
//        cout<<"do not find"<<endl;
//    return 0;
//}

//int main(){
//    map<int ,string > studentmap;
//
//    studentmap.insert(pair<int,string>(1,"student_111"));
//    studentmap.insert(pair<int,string>(2,"student_222"));
//    studentmap.insert(pair<int,string>(3,"student_333"));
//
//    map<int,string >::iterator iter;
////    使用count判断
//    if(studentmap.count(2)!=0)
//        cout<<"the value is "<<studentmap[2]<<endl;
//    else
//        cout<<"failed"<<endl;
//}
////使用low和upper
//int main(){
//    map<int ,string>studentmap;
//
//    studentmap.insert(pair<int,string>(1,"student_1111"));
//    studentmap.insert(pair<int,string>(2,"student_2222"));
//    studentmap.insert(pair<int,string>(3,"student_3333"));
//    studentmap.insert(pair<int,string>(4,"student_4444"));
//
//    map<int ,string>::iterator iter;
////    返回下界1的迭代器
//    iter=studentmap.lower_bound(1);
//    cout<<iter->second<<endl;
////    返回下界2的迭代器
//    iter=studentmap.lower_bound(2);
//    cout<<iter->second<<endl;
////    返回下界为3的迭代器
//    iter=studentmap.lower_bound(3);
//    cout<<iter->second<<endl;
////    返回上街3的迭代器
//    iter=studentmap.upper_bound(2);
//    cout<<iter->second<<endl;
////      返回上界5的迭代器
//    iter=studentmap.upper_bound(3);
//    cout<<iter->second<<endl;
//
//    pair<map<int,string>::iterator,map<int,string>::iterator> mappair;
//    mappair = studentmap.equal_range(2);
//    if (mappair.first==mappair.second)
//        cout<<"do not find"<<endl;
//    else
//        cout<<"find"<<endl;
////    返回lower和upper
//    mappair=studentmap.equal_range(3);
////    判断两数否相同
//    if (mappair.first==mappair.second)
//        cout<<"do not find"<<endl;
//    else
//        cout<<"find"<<endl;
//    return 0;
//}

////从map中删除
/// 1:iterate erase (iterator it)通过一个条目删除对象
/// 2:iterator erase（iterator first，iterator last）删除一个范围
////3：size——type erase（const Key&key）；通过关键字删除
////4：clear相当于enumMap。erase（enumMap。begin（），enumMap。end（））
//int main(){
//    map<int ,string>studentmap;
//    studentmap.insert(pair<int,string>(1,"student_1111"));
//    studentmap.insert(pair<int,string>(2,"studeng_2222"));
//    studentmap.insert(pair<int,string>(3,"student_3333"));
//    studentmap.insert(pair<int,string>(4,"student_4444"));
//
////    使用迭代器删除 1
////    map<int,string>::iterator iter;
////    iter=studentmap.find(1);
////    studentmap.erase(iter);
//
////    使用关键字删除1
////    int n= studentmap.erase(1);
////    map<int,string>::iterator iter;
//
////    使用迭代器删除成片删除
////    studentmap.erase(studentmap.begin(),studentmap.end());
////    map<int,string>::iterator iter;
//
//
//    for (iter=studentmap.begin();  iter!=studentmap.end() ; iter++) {
//        cout<<iter->first<<" "<<iter->second<<endl;
//    }
//}

////map中的swap是两个容器进行交换



////排序问题sort问题
////map中的元素按照key升序排列所以不能使用sort函数
////使用结构体是不能用insert
//typedef struct tagstudentinfo{
//    int ID;
//    string name;
//    bool operator<(tagstudentinfo const&_A)const{
//        if(ID<_A.ID)
//            return true;
//        if(ID==_A.ID)
//            return name.compare(_A.name)<0;
//        return false;
//    }
//}StudentInfo, *PStudentinfo;
//
//int main()
//{
//    int size;//用学生信息映射分数
//    map<StudentInfo,int> mapstudent;
//    map<StudentInfo,int>::iterator iter;
//
//    StudentInfo StudentInfo;
//
//    StudentInfo.ID=2;
//    StudentInfo.name="liu yi";
//    mapstudent.insert(pair<StudentInfo ,int>(StudentInfo,90));
//
//    StudentInfo.ID=1;
//    StudentInfo.name="li liu";
//    mapstudent.insert(pair<StudentInfo,int>(StudentInfo,80));
//
//    for(iter=mapstudent.begin();iter!=mapstudent.end();iter++)
//        cout<<iter->first.ID<<' '<<iter->first.name<<' '<<iter->second<<endl;
//}

typedef struct tagStudentinfo

{

    int      niD;

    string   strName;

}Studentinfo, *PStudentinfo; //学生信息

class sorrt

{

public:

    bool operator() (Studentinfo const &_A, Studentinfo const &_B) const

    {

        if(_A.niD < _B.niD)

            return true;

        if(_A.niD == _B.niD)

            return _A.strName.compare(_B.strName) < 0;

        return false;

    }
};

int main()

{   //用学生信息映射分数

    map<Studentinfo, int, sorrt>mapStudent;

    map<Studentinfo, int>::iterator iter;

    Studentinfo studentinfo;

    studentinfo.niD = 1;

    studentinfo.strName = "student_one";

    mapStudent.insert(pair<Studentinfo, int>(studentinfo, 90));

    studentinfo.niD = 2;

    studentinfo.strName = "student_two";

    mapStudent.insert(pair<Studentinfo, int>(studentinfo, 80));

    for (iter=mapStudent.begin(); iter!=mapStudent.end(); iter++)

        cout<<iter->first.niD<<' '<<iter->first.strName<<' '<<iter->second<<endl;
}
//
//C++ maps是一种关联式容器，包含“关键字/值”对
//
//begin()         返回指向map头部的迭代器
//
//clear(）        删除所有元素
//
//count()         返回指定元素出现的次数
//
//empty()         如果map为空则返回true
//
//end()           返回指向map末尾的迭代器
//
//equal_range()   返回特殊条目的迭代器对
//
//erase()         删除一个元素
//
//find()          查找一个元素
//
//get_allocator() 返回map的配置器
//
//insert()        插入元素
//
//key_comp()      返回比较元素key的函数
//
//lower_bound()   返回键值>=给定元素的第一个位置
//
//max_size()      返回可以容纳的最大元素个数
//
//rbegin()        返回一个指向map尾部的逆向迭代器
//
//rend()          返回一个指向map头部的逆向迭代器
//
//size()          返回map中元素的个数
//
//swap()           交换两个map
//
//upper_bound()    返回键值>给定元素的第一个位置
//
//value_comp()     返回比较元素value的函数