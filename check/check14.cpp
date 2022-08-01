#include <bits/stdc++.h>
using namespace std;
 
struct Process {
    int pid;
    int bt; 
    int art;
};
void waittime(Process proc[], int n,int wt[])
{
    int rt[n]; 
    for (int i = 0; i < n; i++)
    {
        rt[i] = proc[i].bt;
    }
    int comp = 0, t = 0, minm = INT_MAX;
    int shorts = 0, finish_time;
    bool check = false;
    while (comp != n) {
        for (int j = 0; j < n; j++) 
        {
            if ((proc[j].art <= t) && (rt[j] < minm) && rt[j] > 0) 
            {
                minm = rt[j];
                shorts = j;
                check = true;
            }
        }
        if (check == false) 
        {
            t++;
            continue;
        }
        rt[shorts]--;
        minm = rt[shorts];
        if (minm == 0)
        {
            minm = INT_MAX;
        }
        if (rt[shorts] == 0) 
        {
            comp++;
            check = false;
            finish_time = t + 1;
            wt[shorts] = finish_time -proc[shorts].bt -proc[shorts].art;
            if (wt[shorts] < 0)
            {
                wt[shorts] = 0;
            }
        }
        t++;
    }
}
void turntime(Process proc[], int n,int wt[], int tat[])
{
    for (int i = 0; i < n; i++)
    {
        tat[i] = proc[i].bt + wt[i];
    }
}
void findavgTime(Process proc[], int n)
{
    int wt[n], tat[n], total_wt = 0,total_tat = 0;
    waittime(proc, n, wt);
    turntime(proc, n, wt, tat);
    cout << "Processes "<< " Burst time "<< " Waiting time "<< " Turn around time\n";
    for (int i = 0; i < n; i++) 
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        cout << " " << proc[i].pid << "\t\t"<< proc[i].bt << "\t\t " << wt[i]<< "\t\t " << tat[i] << endl;
    }
    cout << "\nAverage waiting time = "<< (float)total_wt / (float)n;
    cout << "\nAverage turn around time = "<< (float)total_tat / (float)n;
}
int main()
{
    cout<<"Kanishk tayal 2k20/IT/67"<<endl;
    Process proc[] = { { 1, 10, 4 }, { 2, 5, 1 },{ 3, 14, 2 }, { 4, 2, 3 } };
    int n = sizeof(proc) / sizeof(proc[0]);
    findavgTime(proc, n);
    return 0;
}
