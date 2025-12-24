#include <vector>


class ThreadPool
{
	explicit ThreadPool(int num_threads);
	~ThreadPool();

	template<typename Fn, typename T>
	std::future<T> dispatchTask(Fn&& f);

	size_t getThreadCount() const;

	size_t getQueueSize() const;

	private:
	
	
	std::vector<std::thread> threads;	

}
