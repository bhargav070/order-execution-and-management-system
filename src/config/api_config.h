#pragma once

#include<string>

namespace Config
{
    const std::string BASE_URL = "https://test.deribit.com/api/v2/";
    const std::string API_KEY = "0TNl3dx4";
    const std::string API_SECRET = "bQE6syR1WNRF4d6rw1x3DDS_VrYP8EVTR0qfWbRHTSg";
    const std::string ORDERBOOK_ENDPOINT = "public/get_order_book";
    const std::string PLACE_ORDER_ENDPOINT = "private/buy";
    const std::string SELL_ORDER_ENDPOINT = "private/sell";
    const std::string CANCEL_ORDER_ENDPOINT = "private/cancel";
    const std::string MODIFY_ORDER_ENDPOINT = "private/edit";
    const std::string GET_POSITIONS_ENDPOINT = "private/get_positions";
} 
