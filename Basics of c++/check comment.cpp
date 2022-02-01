// //Write a C/C++ program to identify whether a given line is a comment or not.  (Single, MultiLine and Not a comment).

// #include <iostream>
// using namespace std;

// void commet(string line)
// {

//   if (line[0] == '/' && line[1] == '/'
// 		&& line[2] != '/') {

// 		cout << "It is a single-line comment";
// 		return;
// 	}

// 	if (line[line.size() - 2] == '*'
// 		&& line[line.size() - 1] == '/' && line[0] == '/' && line[1] == '*') {

// 		cout << "It is a multi-line comment";
// 		return;
// 	}

// 	cout << "It is not a comment";
// }


// int main()
// {

// 	string commornom; 
//   cout << "Enter a string" << endl;
//   cin >> commornom;
// 	commet(commornom);

// 	return 0;
// }