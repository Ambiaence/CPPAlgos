void reverseprint(singlylinkedlistnode* llist) {
	if(llist == nullptr) {
		return;
	} else {
		reverseprint(llist->next);
		cout << llist->data << endl;
	}
}

