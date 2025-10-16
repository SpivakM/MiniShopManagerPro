shop: build/shop.o build/buy_item.o build/change_item_price.o build/delete_item.o build/discount.o build/find_item_by_name.o build/find_item_with_max_price.o build/list_items.o build/list_under_100.o build/total_price.o build.shop.h
	g++ -o build/shop build/shop.o

build/shop.o: shop.cpp shop.h
	g++ -o build/shop.o shop.cpp

build/add_item.o: dependencies/add_item.cpp dependencies/add_item.h
	g++ -o build/add_item.o dependencies/add_item.cpp

build/buy_item.o: dependencies/buy_item.cpp dependencies/buy_item.h
	g++ -o build/buy_item.o dependencies/buy_item.cpp

build/change_item_price.o: dependencies/change_item_price.cpp dependencies/change_item_price.h
	g++ -o build/change_item_price.o dependencies/change_item_price.cpp

build/delete_item.o: dependencies/delete_item.cpp dependencies/delete_item.h
	g++ -o build/delete_item.o dependencies/delete_item.cpp

build/discount.o: dependencies/discount.cpp dependencies/discount.h
	g++ -o build/discount.o dependencies/discount.cpp

build/find_item_by_name.o: dependencies/find_item_by_name.cpp dependencies/find_item_by_name.h
	g++ -o build/find_item_by_name.o dependencies/find_item_by_name.cpp

build/find_item_with_max_price.o: dependencies/find_item_with_max_price.cpp dependencies/find_item_with_max_price.h
	g++ -o build/find_item_with_max_price.o dependencies/find_item_with_max_price.cpp

build/list_items.o: dependencies/list_items.cpp dependencies/list_items.h
	g++ -o build/list_items.o dependencies/list_items.cpp

build/list_under_100.o: dependencies/list_under_100.cpp dependencies/list_under_100.h
	g++ -o build/list_under_100.o dependencies/list_under_100.cpp

build/total_price.o: dependencies/total_price.cpp dependencies/total_price.h
	g++ -o build/total_price.o dependencies/total_price.cpp

