//Biniam Gashaw
//Date: 9/29/23
//purpose: This cpp file is set to the functions of the arraylist classs for the use of array list implementation.
template<class ItemType>
ArrayList<ItemType>::ArrayList() : maxCount(DEFAULT_CAPACITY), itemCount(0){}

template<class ItemType>
ArrayList<ItemType>::ArrayList(const ArrayList<ItemType>& aList){
	itemCount = aList.itemCount;
	maxCount = aList.maxCount;
}

template<class ItemType>
bool ArrayList<ItemType>::isEmpty() const{

	if(itemCount == 0){
		return true;
	}
	return false;
}

template<class ItemType>
int ArrayList<ItemType>::getLength() const{
	return itemCount;
}

template<class ItemType>
bool ArrayList<ItemType>::insert(int newPosition, const ItemType& newEntry){
	bool ableToInsert = (newPosition >= 1) && (newPosition <= itemCount + 1) && (itemCount < maxCount);
	if (ableToInsert){
		for(int pos = itemCount + 1; pos > newPosition; pos--){
			items[pos] = items[pos - 1];
			}
			items[newPosition] = newEntry;
			itemCount++;
		}
		return ableToInsert;
}

template<class ItemType>
bool ArrayList<ItemType>::remove(int position){

	if(itemCount == 0){
    	return false;
	}
	if(itemCount > 0){
		for(int i = position; i < itemCount -1; i++){
				items[i]= items[i+1];
			i--;
		}
	}
	return true;	
}

template<class ItemType>
void ArrayList<ItemType>::clear(){
	itemCount = 0;
}

template<class ItemType>
ItemType ArrayList<ItemType>::getEntry(int position) const {
	bool ableToGet = (position >= 1) && (position <= itemCount);
	if (ableToGet){
		return items[position];
	} 
	throw "Item not found";
} 

template<class ItemType>
ItemType ArrayList<ItemType>::replace(int position, const ItemType& newEntry){

	bool ableToReplace = (position >= 1) && (position <= itemCount);
	ItemType temp;
	if(ableToReplace){
	temp = items[position - 1];
	items[position - 1] = newEntry;	
	}
	// this funcion poteintally replaces the list on the prtiority and pushes it back one when another
	//item is added to the list.
	//ex: 1:study is pushed to 2: study when i impmenetn another prioty as one

return temp;
}
