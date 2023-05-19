#pragma once

#include <iostream>
#include <atomic>
#include <thread>
#include <condition_variable>

class PingPong
{
public:
	static constexpr std::size_t MAX = 3;
	void ping();
	void pong();

private:
	std::atomic<std::size_t> count_ = 0;
	std::mutex m_;
	std::condition_variable cv_;
};