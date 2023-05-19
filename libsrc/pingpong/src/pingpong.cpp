#include "../../../include/pingpong/pingpong.hpp"

void PingPong::ping()
	{
    	std::unique_lock<std::mutex> lock(m_);
    	while (count_.load() < MAX)
    	{
        	std::cout << "Ping" << std::endl;
        	count_++;
        	cv_.notify_all();
        	cv_.wait(lock);
    	}
	cv_.notify_all();
 	}

void PingPong::pong()
	{
    	std::unique_lock<std::mutex> lock(m_);
    	while (count_.load() < MAX)
    	{
        	std::cout << "Pong" << std::endl;
        	count_++;
        	cv_.notify_all();
        	cv_.wait(lock);
    	}
	cv_.notify_all();
	}