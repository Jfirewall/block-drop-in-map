search:
				else if (IsRevive() == true)
				{
					Reward(false);
				}
				else
				{
					Reward(true); // Drops gold, item, etc..
				}
replace:

else if (IsRevive() == true)
				{
					Reward(false);
				}
				else
				{
#ifdef ENABLE_BLOCK_DROP_MAP
					if (is_drop_item(GetMapIndex())){
						Reward(false);}
					else{
						Reward(true);}
#else
					Reward(true);}
#endif