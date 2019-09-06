//StringStreamLineAndReadStringxString
cin.ignore();
while(getline(cin,strLine)){
    stringstream ss;
    ss<<strLine;
    string str;
    while(ss>>str){
        //lag
    }
}

//TwoForm
std::string text = "123";
int number;
std::istringstream iss (text);
iss >> number;
