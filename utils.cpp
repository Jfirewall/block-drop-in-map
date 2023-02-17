add:

#ifdef ENABLE_BLOCK_DROP_MAP
bool is_drop_item(int map_index){
	vector<int> DropMap {41}; // -- add index the map (41 == jinno map)
	
	//dungeon
	for (int i=180000; i<190000; i++) DropMap.push_back(i);
	
	return std::find(DropMap.begin(), DropMap.end(), map_index) != DropMap.end();
}
#endif