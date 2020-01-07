#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int test_case, previous_score, run_gained, boll_remain, target_run;
    double over_played, over_remaining;
    double current_rate, required_rate;
    cin >> test_case;
    for(int i = 0;i < test_case;i++){
        cin >> previous_score >> run_gained >> boll_remain;
        target_run = previous_score + 1;
        over_remaining = (300 - boll_remain) / 6;
        over_played = boll_remain / 6;
        current_rate = previous_score / over_played;
        required_rate = (target_run - run_gained) / over_remaining;
        printf("%.2lf %.2lf\n",current_rate,required_rate);
    }
    return 0;
}
