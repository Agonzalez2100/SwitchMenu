int main()
{
	char ch; int val; string ID;
	PQ test;
	file(test); //
	test.Display(cout);

	//recurring menu
	bool done = true;
	while (done)
	{
		menu();
		cin >> val; 
		switch (val)
		{
		case 0:
			done = false;
			break; //need after all, to break out if found early
		case 1:
			test.Max();
			break;
		case 2:
			test.ExtractMax();
			break;
		case 3:
			cout << "Which ID?" << endl; cin >> ID;
			test.Delete(ID);
			break;
		case 4:
			InsertNewPlayer(test);
			break;
		case 5:
			cout << "Which ID?" << endl; cin >> ID;
			test.Update(ID);
			break;
		case 6:
			test.Display(cout);
			break;
		case 7:
			done = false;
			test.Display(cout);
			WriteToFile(test);
			break;
		}
	}

	cin >> ch;
	return 0;
}

/******************************************************************************
Gives options to user
*******************************************************************************/
void menu()
{
	cout << endl << "What would you like to do? Choose from the following:" << endl;
	cout << "0 = Quit" << endl;
	cout << "1 = display the max entry of the queue" << endl;
	cout << "2 = extract the max entry from the queue" << endl;
	cout << "3 = delete a specified object with given ID" << endl;
	cout << "4 = insert a new Player (w/ given ID and appropriate values for data members)" << endl;
	cout << "5 = update a Player w/ given ID" << endl;
	cout << "6 = display the contents of the PQ" << endl;
	cout << "7 = quit, display the contents of the PQ, and write them to a textfile in original format" << endl;
	return;
}
