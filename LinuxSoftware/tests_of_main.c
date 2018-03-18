
		switch (reg1){
		case 0:
			printf("Ready for configure register 0 of vip mix. Give value: ");
			scanf("%d",&reg_value);
			reg_value1 = reg_value;
			printf("\n");
			*(uint32_t *)h2p_lw_mix_addr = reg_value1;		//MAXIMUM 8bits;
			break;
		case 1:
			printf("Ready for configure register 1 of vip mix. Give value: ");
			scanf("%i",&reg_value);
			reg_value1 = reg_value;
			printf("\n");
			*(uint32_t *)h2p_lw_mix_addr_offset1 = reg_value1;
			
			*(uint32_t *)h2p_lw_mix_addr = stop_mix; 
				usleep(10000);
			*(uint32_t *)h2p_lw_mix_addr = start_mix; 
			break;
		case 2:
			printf("Ready for configure register 2 of vip mix. Give value: ");
			scanf("%i",&reg_value);
			reg_value1 = reg_value;
			printf("\n");
			*(uint32_t *)h2p_lw_mix_addr_offset2 = reg_value1;
			
			*(uint32_t *)h2p_lw_mix_addr = stop_mix; 
				usleep(10000);
			*(uint32_t *)h2p_lw_mix_addr = start_mix; 
			break;
		case 3:
			printf("Ready for configure register 3 of vip mix. Give value: ");
			scanf("%i",&reg_value);
			reg_value1 = reg_value;
			printf("\n");
			*(uint32_t *)h2p_lw_mix_addr_offset3 = reg_value1;
			
			*(uint32_t *)h2p_lw_mix_addr = stop_mix; 
				usleep(10000);
			*(uint32_t *)h2p_lw_mix_addr = start_mix; 
			break;
		case 4:
			printf("Ready for configure register 4 of vip mix. Give value: ");
			scanf("%i",&reg_value);
			reg_value1 = reg_value;
			printf("\n");
			*(uint32_t *)h2p_lw_mix_addr_offset4 = reg_value1;
			/* 
			*(uint32_t *)h2p_lw_mix_addr = stop_mix; 
				usleep(10000);
			*(uint32_t *)h2p_lw_mix_addr = start_mix;  
			*/
			break;
		default:
			printf("Wrong number\n");
		}







	 	mix_data = *(uint8_t *)h2p_lw_mix_addr;
		mix_data_1 = *(uint8_t *)h2p_lw_mix_addr_offset1;
		mix_data_2 = *(uint8_t *)h2p_lw_mix_addr_offset2;
		mix_data_3 = *(uint8_t *)h2p_lw_mix_addr_offset3;
		mix_data_4 = *(uint8_t *)h2p_lw_mix_addr_offset4;
		mix_data_5 = *(uint8_t *)h2p_lw_mix_addr_offset5;
		mix_data_6 = *(uint8_t *)h2p_lw_mix_addr_offset6;
		mix_data_7 = *(uint8_t *)h2p_lw_mix_addr_offset7;
		
		
		
	*(uint32_t *)h2p_lw_mix_addr_offset1 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset2 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset3 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset4 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset5 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset6 = 0x01;
	*(uint32_t *)h2p_lw_mix_addr_offset7 = 0x01;
	
	
			
		