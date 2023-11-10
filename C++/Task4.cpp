//#include <iostream>
//#include<string>
//#include <utility>
//#include<vector>
//using namespace std;
//class TODoList{
//
//    private:
//
//    class Task
//	{	public:
//	 		string task;
//			bool taskStatus;
//
//			explicit Task(string T="",bool status= false)
//			{
//				task=std::move(T);
//				taskStatus=status;
//			}
//
//   			friend ostream& operator<<(ostream& out,Task& t)
//    		{
//    				    out<<t.task<<endl;
//      				  if(t.taskStatus)
//        				{
//				            out<<"task Status : Complete"<<endl;
//        				}
//        			  else {
//           			             out << "task Status : inComplete " << endl;
//        				}
//       				 return out;
//    		}
//
//	};
//      vector<Task> TaskList;
//
//    public:
//
//
//    TODoList()
//    = default;
//    explicit TODoList(string T,bool S= false)
//    {
//        Task L=Task(std::move(T),S);
//        TaskList.emplace_back(L);
//    }
//    void insert(string T,bool Status=false)
//    {
//        Task L=Task(std::move(T),Status);
//        TaskList.emplace_back(L);
//    }
//    void MarkedAsComplete(const string& T)
//    {
//        for(auto & i : TaskList)
//        {
//            if(i.task==T)
//            {
//             i.taskStatus=true;
//             return;
//            }
//        }
//        cout<<"No Such Task Exist to be Marked As complete"<<endl;
//    }
//    void RemoveTask(const string& T)
//    {
//        for (int i = 0; i < TaskList.size(); i++)
//            if (TaskList[i].task == T) {
//                TaskList.erase(TaskList.begin() + i);
//                return;
//            }
//        cout<<"No such Task Exist To be Removed"<<endl;
//    }
//    void PrintInorder()
//    {
//        for (auto &i: TaskList)
//            cout << i << endl;
//    }
//
//};
//
//
//
//int main()
//{
//    TODoList Obj;
//    cout<<"Enter 5 Tasks"<<endl;
//    string Task;
//    for(int i=0;i<5;i++)
//    {
//        cout<<"Enter The Task"<<endl;
//        cin>>(Task);
//        Obj.insert(Task);
//    }
//    Obj.PrintInorder();
//    for(int i=0;i<2;i++)
//    {
//        cout<<"Enter The Task Marked To be Completed"<<endl;
//        cin>>Task;
//        Obj.MarkedAsComplete(Task);
//    }
//    Obj.PrintInorder();
//    for(int i=0;i<2;i++)
//    {
//        cout<<"Enter The Task You wanted to remove"<<endl;
//        cin>>Task;
//        Obj.RemoveTask(Task);
//    }
//    Obj.PrintInorder();
//}
