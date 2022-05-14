// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
   Item();
	Item(int it_code, float uni_price);
	void setDiscount(float pdiscount);
	float getDiscount();
	float discountedPrice();
	void display();
	~Item();

};
   
