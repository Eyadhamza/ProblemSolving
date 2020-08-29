#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
#include <string>



using namespace std;



int main()
{


    return 0;

}

void StringsMa() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    if (s.length()%2 ==0)
    {

        cout << "CHAT WITH HER!";

    }else{

        cout << "IGNORE HIM!";
    }
}

void Abri() {
    int n;
    cin >> n;
    string s,abv;
    while (n--)
    {
        cin >> s;
        if (s.length()>10)
        {
            abv=s[0]+to_string(s.length()-2)+s[s.length()-1];
        } else{
            cout << s <<endl;
        }
        cout << abv<<endl;
    }
}

void NoSuitableName() {
    string a,b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < 92) {
            a[i] += 32;
        }
        if (b[i] < 92) {
            b[i] += 32;
        }
    }
    if (a < b) {
        cout << -1;
    } else if (a > b) {
        cout << 1;
    } else if (a == b) {
        cout << 0;
    }
}

void ProblemKickedME() {
    int t;
    cin >>t;

    bool OneBeside=false;
    for (int i = 0; i < t; ++i) {
        string s;
        cin >>s;
        int NumberOfZeros=0;
        for (int j = 0; j < s.length(); ++j) {
                if (s[j] == '0') {
                    if (s[j+1]=='1')
                    {
                        OneBeside=true;

                    }
                    else if(s[j+1]=='0')
                    {

                        OneBeside=false;
                        NumberOfZeros++;
                    }
                }
                if (s[j] == '1') {

                    if (s[j+1]=='0')
                    {
                        NumberOfZeros++;
                        OneBeside=true;

                    }
            }

            }
        if (OneBeside)
        {
            cout <<NumberOfZeros << endl;
        }
        else{
            cout << 0 << endl;
        }

    }
}

void stringsandother() {
    int n;
    cin >> n;


    for (int i = 0; i < n; ++i) {
        string b;
        string bAfter;
        cin >> b;
        if (b.length()==2)
        {
            cout <<b << endl;
            continue;
        }
        for (int j = 0; j < b.length(); j=j+2) {
            bAfter=bAfter+b[j];


        }
        if (b.length()%2==0)
        {
            bAfter=bAfter+b[b.length()-1];
        }
    cout << bAfter << endl;

    }
}

void ConvertingWords() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        s[i]=tolower(s[i]);
    }
    string converted;
    for (int i = 0; i < s.length(); ++i) {

        if (s[i]!='a'&&s[i]!='o'&&s[i]!='y'&&s[i]!='e'&&s[i]!='o'&&s[i]!='i'&&s[i]!='u')
        {
            converted = converted+'.' + s[i];
        }

    }
    cout <<converted;
}

void Hello() {
    string s;
    cin >> s;
    string ActualWord="hello";
    int index=0;
    for (int i = 0; i < s.length(); ++i) {
        if (index==5)break;
        if (s[i]==ActualWord[index])
        {
            index++;
        }
    }
    if (index==5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

void WordAndInverse() {
    string word,inverseWord;


    cin >> word;

    cin >> inverseWord;

    bool matched=false;
    if (word.size()!=inverseWord.size() && word.size()>100)
    {
        exit(0);
    }
    for (int i = 0; i < word.size(); ++i) {

        if (word[i]==inverseWord[(word.size()-1)-i])
        {

            matched= true;
        } else{
            matched=false;
        }

    }
    if (matched)
    {
        cout<< "YES";
    } else{
        cout<<"NO";
    }
}

void ReallyDontKnow() {
    int n;
    cin >> n;
    int arr[10][10];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i == 0) {
                arr[i][j] = 1;
            } else if (j == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }


        }
    }
    cout << arr[n-1][n-1];
}

void A160() {
    int ArraySize;
    cin >> ArraySize;
    int* arr = new int[ArraySize];
    int sum=0;
    int counter=0;
    for(int i=0;i<ArraySize;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sum=sum/2;
    sort(arr,arr+ArraySize);
    int sum2=0;
    for(int i=ArraySize-1;i>=0;i--){
        sum2+=arr[i];
        ++counter;
        if(sum2>sum){
            break;
        }


    }

    cout<<counter;
}

void BadLuck() {

    int ArraySize;
    cin >> ArraySize;
    int* ArrayNum = new int[ArraySize];

    cout << "enter elements of the array";
    for (int i = 0; i < ArraySize; ++i)
    {
        cin >> ArrayNum[i];
    }

    vector<int>NegativeSet;
    vector<int>PositiveSet;
    vector<int>ZeroSet;
    vector<int>NegativeNUM;

    for (int i = 0; i < ArraySize; ++i)
    {
        if (ArrayNum[i]<0)
        {
            NegativeNUM.push_back(ArrayNum[i]);


        }
        if (ArrayNum[i]>0)
        {
            PositiveSet.push_back(ArrayNum[i]);


        }
        if (ArrayNum[i]==0)
        {
            ZeroSet.push_back(ArrayNum[i]);

        }


    }
    for (int i = 0; i < NegativeNUM.size(); ++i) {
        NegativeSet.push_back(NegativeNUM.at(i));
        PositiveSet.push_back(NegativeNUM.at(i+1));
        NegativeSet.push_back(NegativeNUM.at(i+2));
        NegativeSet.push_back(NegativeNUM.at(i+3));
    }
    cout <<NegativeSet.size() << " ";
    for(auto i = NegativeSet.begin(); i != NegativeSet.end(); ++i)
        cout <<  *i <<" ";
    cout << endl;
    cout <<PositiveSet.size() << " ";
    for(auto i = PositiveSet.begin(); i != PositiveSet.end(); ++i)
        cout <<  *i <<" ";
    cout << endl;

    cout <<ZeroSet.size() << " ";
    for(auto i = ZeroSet.begin(); i != ZeroSet.end(); ++i)
        cout <<  *i <<" ";
    cout << endl;


}

void Array123() {
    int n;
    while(cin>>n)
    {
        bool x=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(n-1-j==i){
                    cout<<2;
                    continue;
                }
                if(i==j){
                    cout<<1;
                }
                else{
                    cout<<3;
                    continue;
                }
            }
            cout<<endl;
        }
    }
}

void Bcolor() {
    char N[8][8];
    int i=0;
    double BcolorOfCol=0;
    double BcolorOfRow=0;

    double Bcolor=0;
    while (i<8) {
        for (int j = 0; j < 8; ++j) {
            cin >>N[i][j];
        }
         i++;
    }
    for (int j = 0; j < 8; ++j) {
        for (int k = 0; k < 8; ++k) {
            if (N[j][k] == 'B')
            {
                BcolorOfRow++;
            }
            if (N[k][j] == 'B')
            {
                BcolorOfCol++;
            }

        }

    }

    BcolorOfCol=ceil(BcolorOfCol/8);
    BcolorOfRow=ceil(BcolorOfRow/8);

    Bcolor=(BcolorOfRow >BcolorOfCol ?BcolorOfRow:BcolorOfCol);
    cout << Bcolor;
}

void HomeGuest() {
    int n,x,y,count=0;
    cin >> n;
    int* a = new int[n];
    int* b = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> x >>y;
        a[i]=x;
        b[i]=y;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (a[i]==b[j])
            {
                count++;
            }
        }
    }
    cout <<"number = " << count;

}

void Cards() {
    int n;
    cout << "enter number of cards ";
    cin >> n;
    int* arr = new int[n];

    cout << "enter the values of cards";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    int sumP1=0 ,sumP2=0,role=0,max=0 ,j=n-1,i=0;

    while (i<=j){
        if (arr[i]>=arr[j])
        {

           max=arr[i];
           i++;
        }
        else
        {
            max=arr[j];
            j--;
        }
        if(role%2==0)
            sumP1=sumP1+max;
        else
            sumP2=sumP2+max;
        role++;

    }
    cout <<"the first player sum : "<< sumP1 << endl <<"the second player sum : "<<sumP2;
}

void Secondarydiagonal() {
    double N[12][12], sum=0;
    char c[2];
    cin >>  c;
    int n = 0, i, j=0;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            cin >> N[i][j];
        }
    }
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12-n;j++){
            sum += N[i][j];
        }
        n++;
    }
    if(c[0] == 'S')
        printf("%.1lf\n", sum);

    else
        printf("%.1lf\n", sum / 66.0);
}

void Arrayexample() {
    int n;
    cin >> n;
    while (true)
    {
        if (n==0)
        {
            break;
        }

        int **arr = new int*[n];
        for(int i = 0; i < n; ++i) {
            arr[i] = new int[n];
        }

        for (int i = 0; i < n; i+=1)
        {
            for (int j = 0; j < n; ++j)
            {
                arr[i][j]=(1*pow(2,i))*pow(2,j);
                cout << arr[i][j] << " ";
            }
            cout << endl;

        }
        n--;
    }
}

void pasted() {
    int n, m, a[100 + 2], x, y;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    cin >> m;
    while (m--)
    {
        cin >> x >> y;
        a[x-1] += (y - 1);
        a[x+1] += (a[x] - y);
        a[x] = 0;
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << endl;
    }
}
void MainDiagonal() {
    double N[12][12], sum=0;
    char c[2];
    cin >>  c;
    int n = 1, i, j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            cin >> N[i][j];
        }
    }
    for(i = 0;i < 12;i++){
        for(j = n;j < 12;j++){
            sum += N[i][j];
        }
        n++;
    }
    if(c[0] == 'S')
        printf("%.1lf\n", sum);

    else
        printf("%.1lf\n", sum / 66.0);
}

void Overthinking() {
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
}

void cordin() {
    int k,n,m,x,y,i;
    for( ; ; )
    {
        cin >> k;
        if(k==0)
        {
            break;
        }

        cin >> n >> m;
        for(i=0;i<k;i++)
        {
            cin >> x >> y;
            if(x==n || y==m){
                printf("divisa\n");
            }
            else if(x>n && y>m){
                printf("NE\n");
            }
            else if(x<n && y>m){
                printf("NO\n");
            }
            else if(x<n && y<m){
                printf("SO\n");
            }
            else if(x>n && y<m){
                printf("SE\n");
            }
        }
    }
}

void bets() {
    int n, m, T;
    long long int a, b;

    cin >> T;
    while(T--)
    {
        cin >> n >> m;
        if(m > n)
            printf("impossible\n");
        else {
            b = (n - m)/2;
            a = m + b;
            if(a + b == n && abs(a - b) == m)
                printf("%lld %lld\n", a, b);
            else
                printf("impossible\n");
        }
    }
}

void dangerous() {
    cout << "enter sequence of players";
    string s;
    cin >> s;
    int dangerous=0;
    if (s.length()<=100)
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i]==s[i+1] && dangerous<=7)
            {
                if (dangerous==7)
                {
                    break;
                }
                else
                {
                    dangerous++;
                }

            }
           if (s[i]!=s[i+1])
           {
                dangerous=1;
               continue;

           }


        }


    }
    if (dangerous==7)
    {
        cout << "YES" <<dangerous;
    } else{
        cout << "NO" <<dangerous;
    }
}

void VanyaandFence() {
    cout << "enter the number of friends and height of the fence ";

    int n,h;
    cin >> n >> h;
    int* arr = new int[n];

    cout << "enter height of friends";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int width=0;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] <= h)
        {
            width++;
        }
        else{
            width=width+2;
        }
    }
    cout << "the width = " << width;
}

void sequence() {
    cout << "enter the number of stones";

    int n;
    cin >> n;

    cout << "enter sequence of stones";
    string s;
    cin >> s;

    int count=0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i]==s[i+1])
        {
            count++;
            continue;
        }

    }
    cout << count;
}
void ArrayArea2()
{

    int M[12][12];
    char operation;
    cin >> operation;

    double sum = 0;
    double count = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double x;
            cin >> x;
            M[i][j] = x;
            if (j > i && i < (12 - j - 1))
            {
                sum += x;
                count++;

            }
        }

    }
    if (operation == 'S') {
        printf("%.1f\n", sum);
    }
    else {
        printf("%.1f\n", (sum / count));
    }
}

void ArrayArea()
{
    int M[12][12];
    char operation;
    cin >> operation;

    double sum = 0;
    double count = 0;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            double x;
            cin >> x;
            M[i][j] = x;
            if (j > i && j < (12 - i - 1))
            {
                sum += x;
                count++;

            }
        }

    }
    if (operation == 'S') {
        printf("%.1f\n", sum);
    }
    else {
        printf("%.1f\n", (sum / count));
    }
}

void MaxMinArray()
{
    int arr[10], n, i, max, min;
    cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
    max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max << endl;
    cout << "Smallest element : " << min;
}

void AddingOddNum()
{
    int n, x, y, sum = 0;

    cout << "enter the value of test cases";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "enter the value of x , y ";
        cin >> x >> y;

        for (int i = 0; i < y; i++)
        {
            if (x % 2 == 0)
            {
                x++;
            }
            if (x % 2 != 0)
            {
                sum = sum + x;
                x += 2;
            }

        }
        cout << "sum is : " << sum;
    }
}

void Devisors()
{
    int M;

    cout << "enter the values M " << endl;
    cin >> M;

    for (int i = 1;i <= M;i++)
    {
        if (M % i == 0)
            printf("%d ", i);

    }

}

void Sequence()
{
    int M;

    cout << "enter the values M " << endl;
    cin >> M;

    for (int i = 1; i <= M; i++)
    {
        cout << i << " " << (i * i) << " " << (i * i * i) << " " << endl;
        cout << i << " " << (i * i) + 1 << " " << (i * i * i) + 1 << " " << endl;

    }
}

void CalculatingSum()
{
    int M, N;

    cout << "enter the values M ,N " << endl;
    cin >> M >> N;
    int sum = 0;
    if ((M * N) > 0)
    {
        if (M < N)
        {
            for (int i = M; i <= N; i++)
            {
                cout << i << endl;
                sum = sum + i;
            }
        }
        else
        {
            for (int i = N; i <= M; i++)
            {
                cout << i << " ";
                sum = sum + i;
            }
        }
        cout << "sum = " << sum;
    }
}


int Calculating(int a)
{
    int result;
    if (a == 1)
    {
        return  -1;
    }
    else
    {
        result = pow((-1), a) * a;
        return result + Calculating(a - 1);
    }

}



void Dominos()
{
    int M, N;

    cout << "enter the values M ,N " << endl;
    cin >> M >> N;

    int result;
    if (M >= N)
    {
        result = floor(M / 2) + N;
    }
    cout << "number of squares are " << result;
}

void DaysNumbers()
{
    double n;

    cout << " enter value of n " << endl;
    cin >> n;
    if (n == 1)
    {
        cout << "one";
    }
    else if (n == 2)
    {
        cout << "two";

    }
    else if (n == 3)
    {
        cout << "three";

    }
    else if (n == 4)
    {
        cout << "four";

    }
    else if (n == 5)
    {
        cout << "five";

    }
    else if (n == 6)
    {
        cout << "six";

    }
    else if (n == 7)
    {
        cout << "seven";

    }
    else if (n == 8)
    {
        cout << "eight";

    }
    else if (n == 9)
    {
        cout << "nine";

    }
    else
    {
        cout << "greater than 9 ";
    }
}

void MaximumThroughEquation()
{
    double a, b, c, firstMax, MaxiMax;

    cout << " enter values of A , B , C  respectivly" << endl;

    cin >> a >> b >> c;
    firstMax = (a + b + abs(a - b)) / 2;
    MaxiMax = (firstMax + c + abs(firstMax - c)) / 2;

    cout << MaxiMax << " is the maximum";
}

void GameDuration()
{
    int initialHour, initialMinute, finalHour, finalMinute;

    cout << "enter the following respectivly : initialHour, initialMinute, finalHour, finalMinute " << endl;
    cin >> initialHour >> initialMinute >> finalHour >> finalMinute;

    int duration[2];
    duration[0] = finalHour - initialHour;
    if (duration[0] < 0)
    {
        duration[0] = 24 + finalHour - initialHour;
    }
    duration[1] = finalMinute - initialMinute;
    if (duration[1] < 0)
    {
        duration[1] = 60 + finalMinute - initialMinute;
        duration[0]--;
    }
    if (finalHour == initialHour && finalMinute == initialMinute)
    {
        duration[0] = 24;
        duration[1] = 0;
    }
    if (finalHour == initialHour && finalMinute != initialMinute)
    {
        duration[0] = 23;
        duration[1] = 60 + finalMinute - initialMinute;
    }
    cout << duration[0] << " hour(s) and " << duration[1] << " minute(s)";
}

void QuadraticEquation()
{
    double a, b, c, num;

    cout << " enter values of A , B , C  respectivly" << endl;
    cin >> a >> b >> c;

    num = (b * b) - (4 * (a) * (c));

    if (num > 0 && a != 0) {
        double x, y;
        num = sqrt(num);
        x = (-b + num) / (2 * a);
        y = (-b - num) / (2 * a);
        printf("Root1 = %.5lf\n", x);
        printf("Root2 = %.5lf\n", y);
    }
    else
    {
        printf("\nImpossible to find the roots.\n");
    }
}


void NewSalary()
{

    double Salary, netSalary, earnedMoney;
    float percentage;
    cout << "enter your  salary : ";
    cin >> Salary;

    if (Salary>0)
    {
        if (Salary<400)
        {
            netSalary = ((Salary * 15) / 100) + Salary;
            percentage = 15;
        }
        else if (Salary > 400.01 && Salary <= 800)
        {
            netSalary = ((Salary * 12) / 100) + Salary;
            percentage = 12;
        }
        else if (Salary > 800.01 && Salary <= 1200)
        {
            netSalary = ((Salary * 10) / 100) + Salary;
            percentage = 10;
        }
        else if (Salary > 1200.01 && Salary <= 2000)
        {
            netSalary = ((Salary * 7) / 100) + Salary;
            percentage = 7;
        }
        else if (Salary > 2000)
        {
            netSalary = ((Salary * 4) / 100) + Salary;
            percentage = 4;
        }

    }
    else
    {
        cout << "you entered negative salary , try again";
    }
    earnedMoney = netSalary - Salary;
    printf("new salary : %.2f \n", netSalary);
    printf("money earned : %.2f \n", earnedMoney);
    cout << "Percentage :" << percentage << "%";
}

void BonusSalary()
{
    string name;

    double fixedSalary;

    double totalSales;

    double bonusSalary;

    cout << "please enter your name : ";
    cin >> name;

    cout << "enter your fixed salary : ";
    cin >> fixedSalary;

    cout << "enter total sales : ";
    cin >> totalSales;

    bonusSalary = (totalSales * 15) / 100;

    double netSalary = bonusSalary + fixedSalary;

    printf("total = R$ %.2f", netSalary);
}

int CalculatingAreas()
{
    float a, b, c;
    const float pi = 3.14159;

    cout << " enter values of A , B , C  respectivly" << endl;
    cin >> a >> b >> c;

    double traingle, circle, trapezium, square, rectangle;

    traingle = (a * c) / 2;
    circle = pi * c * c;
    trapezium = ((a + b) * c) / 2;
    square = b * b;
    rectangle = a * b;


    printf("traingle area: %.3f \n", traingle);
    printf("circle area : %.3f \n", circle);
    printf("trapezium area: %.3f \n", trapezium);
    printf("square area : %.3f \n", square);
    printf("rectangle area : %.3f \n", rectangle);

    return 0;
}

void GradeAverage()
{

    float A, B, C;
    cout << " enter values of A , B , C  respectivly" << endl;

    cin >> A >> B >> C;

    float average = ((A * 2) + (B * 3) + (C * 5)) / 10;

    average = round(average * 10) / 10;

    cout << "Average grade is " << average;
}

void AverageDistance()
{
    int km;

    double totalFuel;

    cout << "enter the distance in km" << endl;

    cin >> km;

    cout << "enter the total fuel" << endl;

    cin >> totalFuel;

    double avarage = (double)km / totalFuel;

    avarage = round(avarage * 1000) / 1000;

    cout << avarage << " km/l ";
}

void Conditional()
{

    int A, B, C, D;
    cout << " enter values of A , B , C , D respectivly" << endl;

    cin >> A >> B >> C >> D;


    if (C > 0 && D > 0 && A % 2 == 0)
    {
        if (B > C && D > A)
        {
            if (C + D > A + B)
            {
                cout << "Accepted values";
            }
            else
            {
                cout << "Values not Accepted ";
            }

        }
        else
        {
            cout << "Values not Accepted ";
        }

    }
    else
    {
        cout << "Values not Accepted ";
    }
}

void ArthimiticOperation()
{
    int A, B, C, D, result;
    cout << " enter values of A , B , C , D respectivly" << endl;

    cin >> A >> B >> C >> D;

    result = (A * B - C * D);

    cout << "DIFERENCA = " << result;
}

void CalculateTime()
{
    double totalSeconds;

    cout << "enter number of seconds" << endl;

    cin >> totalSeconds;

    int hours, minutes, seconds;


    minutes = totalSeconds / 60;

    hours = minutes / 60;

    seconds = (int)totalSeconds % 60;

    cout << hours << ":" << int(minutes % 60) << ":" << seconds;
}
