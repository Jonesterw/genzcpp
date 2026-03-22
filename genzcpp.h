#ifndef GENZCPP_H
#define GENZCPP_H


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
# include <thread>
# include <chrono>
# include <random>
# include <numeric>
# include <unordered_map>
#include <fstream>
#include <cmath>
#include <map>
#include <set>
#include <tuple>
#include <cassert>
#include <exception>

#define lock_in int main() {
#define bet return 0; }

#define lowkey if
#define anyways else
#define also else if
#define real true
#define fake false
#define is ==
#define isnt !=
#define and &&
#define or ||
#define not !
#define yap(x) std::cout << x << std::endl
#define say(x) std::cout << x << std::endl
#define ask(x) std::cin >> x
#define spam(times, action) for (int i = 0; i < times; i++) { action; }
#define repeat(times) for (int i = 0; i < times; i++)
#define squad std::vector
#define recruit push_back
#define fix_ts std::sort
#define deadass const
#define grab new
#define drop delete
#define snitch return
#define the_streets NULL
#define fumbled catch
#define yeet throw
#define ghost break
#define swerve continue
#define slay return 0
#define crashout std::terminate()
#define cooked std::cin.fail()
#define opps std::exception
#define delulu false
#define solulu true
#define rent_free volatile
#define textify(x) std::to_string(x)
#define numify(x) std::stoi(x)
#define grab_line(x) std::getline(std::cin, x)
#define root(x) std::sqrt(x)
#define create_file(name) std::ofstream file("name.txt")
#define open_file(name) std::ifstream file("name.txt")
#define total_sum std::accumulate(v.begin(), v.end(), 0)
#define sleep(seconds) std::this_thread::sleep_for(std::chrono::seconds(seconds))
#define current_time std::chrono::system_clock::now()
#define time_since_epoch std::chrono::duration_cast<std::chrono::seconds>(current_time.time_since_epoch()).count()
#define randomize srand(time(0))
#define random_int(min, max) (rand() % (max - min + 1) + min)
#define random_float(min, max) ((float)rand() / RAND_MAX * (max - min) + min)
#define random_double(min, max) ((double)rand() / RAND_MAX * (max - min) + min)
#define random_char() (char)(rand() % 26 + 'a')
#define random_string(length) ([](int length) { std::string str; for (int i = 0; i < length; i++) { str += random_char(); } return str; }(length))
#define random_choice(vec) vec[rand() % vec.size()]
#define random_shuffle(vec) std::random_shuffle(vec.begin(), vec.end())
#define random_sample(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> sample; std::sample(vec.begin(), vec.end(), std::back_inserter(sample), n, std::mt19937{std::random_device{}()}); return sample; }(vec, n))
#define random_permutation(vec) ([](std::vector<int> vec) { std::random_shuffle(vec.begin(), vec.end()); return vec; }(vec))
#define random_subset(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> subset; std::sample(vec.begin(), vec.end(), std::back_inserter(subset), n, std::mt19937{std::random_device{}()}); return subset; }(vec, n))
#define random_combination(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> combination; std::sample(vec.begin(), vec.end(), std::back_inserter(combination), n, std::mt19937{std::random_device{}()}); return combination; }(vec, n))
#define random_permutation_with_repetition(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> permutation; for (int i = 0; i < n; i++) { permutation.push_back(vec[rand() % vec.size()]); } return permutation; }(vec, n))
#define random_subset_with_repetition(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> subset; for (int i = 0; i < n; i++) { subset.push_back(vec[rand() % vec.size()]); } return subset; }(vec, n))
#define random_combination_with_repetition(vec, n) ([](const std::vector<int>& vec, int n) { std::vector<int> combination; for (int i = 0; i < n; i++) { combination.push_back(vec[rand() % vec.size()]); } return combination; }(vec, n))
#define count_occurrences(vec, value) std::count(vec.begin(), vec.end(), value)
#define find_index(vec, value) std::find(vec.begin(), vec.end(), value) - vec.begin()
#define find_indices(vec, value) ([](const std::vector<int>& vec, int value) { std::vector<int> indices; for (int i = 0; i < vec.size(); i++) { if (vec[i] == value) { indices.push_back(i); } } return indices; }(vec, value))
#define find_max(vec) *std::max_element(vec.begin(), vec.end())
#define find_min(vec) *std::min_element(vec.begin(), vec.end())
#define find_average(vec) std::accumulate(vec.begin(), vec.end(), 0) / (double)vec.size()
#define find_median(vec) ([](std::vector<int> vec) { std::sort(vec.begin(), vec.end()); int n = vec.size(); if (n % 2 == 0) { return (vec[n / 2 - 1] + vec[n / 2]) / 2.0; } else { return vec[n / 2]; } }(vec))
#define find_mode(vec) ([](const std::vector<int>& vec) { std::unordered_map<int, int> frequency; for (int num : vec) { frequency[num]++; } int mode = vec[0]; int max_count = 0; for (const auto& pair : frequency) { if (pair.second > max_count) { max_count = pair.second; mode = pair.first; } } return mode; }(vec))
#define find_range(vec) ([](const std::vector<int>& vec) { int min = *std::min_element(vec.begin(), vec.end()); int max = *std::max_element(vec.begin(), vec.end()); return max - min; }(vec))
#define find_variance(vec) ([](const std::vector<int>& vec) { double mean = find_average(vec); double variance = 0; for (int num : vec) { variance += (num - mean) * (num - mean); } return variance / vec.size(); }(vec))
#define find_standard_deviation(vec) std::sqrt(find_variance(vec))
#define find_percentile(vec, p) ([](std::vector<int> vec, double p) { std::sort(vec.begin(), vec.end()); int n = vec.size(); int index = (int)(p * n); return vec[index]; }(vec, p))
#define find_quartiles(vec) ([](std::vector<int> vec) { std::sort(vec.begin(), vec.end()); int n = vec.size(); int q1_index = n / 4; int q2_index = n / 2; int q3_index = 3 * n / 4; return std::make_tuple(vec[q1_index], vec[q2_index], vec[q3_index]); }(vec))
#define find_iqr(vec) ([](std::vector<int> vec) { std::sort(vec.begin(), vec.end()); int n = vec.size(); int q1_index = n / 4; int q3_index = 3 * n / 4; return vec[q3_index] - vec[q1_index]; }(vec))
#define find_outliers(vec) ([](const std::vector<int>& vec) { std::vector<int> outliers; double q1, q3; std::tie(q1, std::ignore, q3) = find_quartiles(vec); double iqr = q3 - q1; double lower_bound = q1 - 1.5 * iqr; double upper_bound = q3 + 1.5 * iqr; for (int num : vec) { if (num < lower_bound || num > upper_bound) { outliers.push_back(num); } } return outliers; }(vec))
#define find_correlation(vec1, vec2) ([](const std::vector<int>& vec1, const std::vector<int>& vec2) { double mean1 = find_average(vec1); double mean2 = find_average(vec2); double numerator = 0; double denominator1 = 0; double denominator2 = 0; for (int i = 0; i < vec1.size(); i++) { numerator += (vec1[i] - mean1) * (vec2[i] - mean2); denominator1 += (vec1[i] - mean1) * (vec1[i] - mean1); denominator2 += (vec2[i] - mean2) * (vec2[i] - mean2); } return numerator / std::sqrt(denominator1 * denominator2); }(vec1, vec2))
#define find_covariance(vec1, vec2) ([](const std::vector<int>& vec1, const std::vector<int>& vec2) { double mean1 = find_average(vec1); double mean2 = find_average(vec2); double covariance = 0; for (int i = 0; i < vec1.size(); i++) { covariance += (vec1[i] - mean1) * (vec2[i] - mean2); } return covariance / vec1.size(); }(vec1, vec2))
#define find_regression_line(vec1, vec2) ([](const std::vector<int>& vec1, const std::vector<int>& vec2) { double mean1 = find_average(vec1); double mean2 = find_average(vec2); double numerator = 0; double denominator = 0; for (int i = 0; i < vec1.size(); i++) { numerator += (vec1[i] - mean1) * (vec2[i] - mean2); denominator += (vec1[i] - mean1) * (vec1[i] - mean1); } double slope = numerator / denominator; double intercept = mean2 - slope * mean1; return std::make_pair(slope, intercept); }(vec1, vec2))
#define predict(vec1, slope, intercept) ([](const std::vector<int>& vec1, double slope, double intercept) { std::vector<int> predictions; for (int num : vec1) { predictions.push_back(slope * num + intercept); } return predictions; }(vec1, slope, intercept))
#define find_r_squared(vec1, vec2, slope, intercept) ([](const std::vector<int>& vec1, const std::vector<int>& vec2, double slope, double intercept) { double mean2 = find_average(vec2); double ss_total = 0; double ss_residual = 0; for (int i = 0; i < vec1.size(); i++) { double predicted = slope * vec1[i] + intercept; ss_total += (vec2[i] - mean2) * (vec2[i] - mean2); ss_residual += (vec2[i] - predicted) * (vec2[i] - predicted); } return 1 - (ss_residual / ss_total); }(vec1, vec2, slope, intercept))
#define kick_out(vec, value) vec.erase(std::remove(vec.begin(), vec.end(), value), vec.end())
#define flip(vec) std::reverse(vec.begin(), vec.end())
#define shuffle(vec) std::random_shuffle(vec.begin(), vec.end())
#define red "\033[31m"
#define green "\033[32m"
#define yellow "\033[33m"
#define blue "\033[34m"
#define magenta "\033[35m"
#define cyan "\033[36m"
#define reset "\033[0m"
#define bold "\033[1m"
#define underline "\033[4m"
#define clear_screen std::cout << "\033[2J\033[1;1H"
#define clear_line std::cout << "\033[2K\r"
#define move_cursor(x, y) std::cout << "\033[" << y << ";" << x << "H"
#define hide_cursor std::cout << "\033[?25l"
#define show_cursor std::cout << "\033[?25h"
#define set_color(color) std::cout << color
#define reset_color std::cout << reset
#define set_bold std::cout << bold
#define set_underline std::cout << underline
#define reset_format std::cout << reset
#define paint(color, text) (set_color(color), text, reset_color)
#define style(format, text) (format, text, reset_format)
#define duration(start, end) std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count()
#define now std::chrono::high_resolution_clock::now()
#define time_it(action) ([](auto&& action) { auto start = now; action; auto end = now; return duration(start, end); }(action)) 
#define log_time(action) ([](auto&& action) { auto start = now; action; auto end = now; std::cout << "Time taken: " << duration(start, end) << " ms" << std::endl; }(action))
#define benchmark(action, iterations) ([](auto&& action, int iterations) { auto total_duration = 0; for (int i = 0; i < iterations; i++) { total_duration += time_it(action); } std::cout << "Average time taken: " << total_duration / iterations << " ms" << std::endl; }(action, iterations))
#define profile(action) ([](auto&& action) { auto start = now; action; auto end = now; std::cout << "Time taken: " << duration(start, end) << " ms" << std::endl; }(action))
#define measure(action) ([](auto&& action) { auto start = now; action; auto end = now; std::cout << "Time taken: " << duration(start, end) << " ms" << std::endl; }(action))
#define time_block(name, action) ([](const std::string& name, auto&& action) { auto start = now; action; auto end = now; std::cout << name << ": " << duration(start, end) << " ms" << std::endl; }(name, action))
#define time_function(func, args) ([](auto&& func, auto&& args) { auto start = now; func(args); auto end = now; std::cout << "Time taken: " << duration(start, end) << " ms" << std::endl; }(func, args))
#define time_lambda(lambda) ([](auto&& lambda) { auto start = now; lambda(); auto end = now; std::cout << "Time taken: " << duration(start, end) << " ms" << std::endl; }(lambda))
#define time_scope(name) TimeScope time_scope_instance(name)
#define TimeScope(name) class TimeScope { public: TimeScope(const std::string& name) : name(name), start(now) {} ~TimeScope() { auto end = now; std::cout << name << ": " << duration(start, end) << " ms" << std::endl; } private: std::string name; std::chrono::high_resolution_clock::time_point start; }
#define archive std::map
#define unarchive std::unordered_map
#define unique_squad std::set
#define pair std::pair
#define tuple std::tuple
#define make_pair std::make_pair
#define make_tuple std::make_tuple
#define get_pair_first std::get<0>
#define get_pair_second std::get<1>
#define get_tuple_element(tuple, index) std::get<index>(tuple)
#define unpack_tuple(tuple, ...) ([](auto&& tuple) { auto& [__VA_ARGS] = tuple; return std::make_tuple(__VA_ARGS__); }(tuple))
#define zip(vec1, vec2) ([](const std::vector<int>& vec1, const std::vector<int>& vec2) { std::vector<std::pair<int, int>> zipped; for (int i = 0; i < std::min(vec1.size(), vec2.size()); i++) { zipped.push_back(std::make_pair(vec1[i], vec2[i])); } return zipped; }(vec1, vec2))
#define unzip(zipped) ([](const std::vector<std::pair<int, int>>& zipped) { std::vector<int> vec1; std::vector<int> vec2; for (const auto& pair : zipped) { vec1.push_back(pair.first); vec2.push_back(pair.second); } return std::make_pair(vec1, vec2); }(zipped))
#define enumerate(vec) ([](const std::vector<int>& vec) { std::vector<std::pair<int, int>> enumerated; for (int i = 0; i < vec.size(); i++) { enumerated.push_back(std::make_pair(i, vec[i])); } return enumerated; }(vec))
#define map(vec, func) ([](const std::vector<int>& vec, auto&& func) { std::vector<int> mapped; for (int num : vec) { mapped.push_back(func(num)); } return mapped; }(vec, func))
#define filter(vec, func) ([](const std::vector<int>& vec, auto&& func) { std::vector<int> filtered; for (int num : vec) { if (func(num)) { filtered.push_back(num); } } return filtered; }(vec, func))
#define reduce(vec, func) ([](const std::vector<int>& vec, auto&& func) { int reduced = vec[0]; for (int i = 1; i < vec.size(); i++) { reduced = func(reduced, vec[i]); } return reduced; }(vec, func))
#define fold(vec, func, initial) ([](const std::vector<int>& vec, auto&& func, int initial) { int folded = initial; for (int num : vec) { folded = func(folded, num); } return folded; }(vec, func, initial))
#define scan(vec, func, initial) ([](const std::vector<int>& vec, auto&& func, int initial) { std::vector<int> scanned; int accumulated = initial; for (int num : vec) { accumulated = func(accumulated, num); scanned.push_back(accumulated); } return scanned; }(vec, func, initial))
#define any(vec, func) ([](const std::vector<int>& vec, auto&& func) { for (int num : vec) { if (func(num)) { return true; } } return false; }(vec, func))
#define all(vec, func) ([](const std::vector<int>& vec, auto&& func) { for (int num : vec) { if (!func(num)) { return false; } } return true; }(vec, func))
#define none(vec, func) ([](const std::vector<int>& vec, auto&& func) { for (int num : vec) { if (func(num)) { return false; } } } return true; }(vec, func))
#define count_if(vec, func) ([](const std::vector<int>& vec, auto&& func) { int count = 0; for (int num : vec) { if (func(num)) { count++; } } return count; }(vec, func))
#define group_by(vec, func) ([](const std::vector<int>& vec, auto&& func) { std::unordered_map<int, std::vector<int>> groups; for (int num : vec) { groups[func(num)].push_back(num); } return groups; }(vec, func))
#define partition(vec, func) ([](const std::vector<int>& vec, auto&& func) { std::vector<int> true_partition; std::vector<int> false_partition; for (int num : vec) { if (func(num)) { true_partition.push_back(num); } else { false_partition.push_back(num); } } return std::make_pair(true_partition, false_partition); }(vec, func))
#define sort_by(vec, func) ([](std::vector<int> vec, auto&& func) { std::sort(vec.begin(), vec.end(), [&](int a, int b) { return func(a) < func(b); }); return vec; }(vec, func))
#define unique(vec) ([](std::vector<int> vec) { std::sort(vec.begin(), vec.end()); vec.erase(std::unique(vec.begin(), vec.end()), vec.end()); return vec; }(vec))
#define flatten(vec) ([](const std::vector<std::vector<int>>& vec) { std::vector<int> flattened; for (const auto& subvec : vec) { flattened.insert(flattened.end(), subvec.begin(), subvec.end()); } return flattened; }(vec))
#define transpose(vec) ([](const std::vector<std::vector<int>>& vec) { std::vector<std::vector<int>> transposed(vec[0].size(), std::vector<int>(vec.size())); for (int i = 0; i < vec.size(); i++) { for (int j = 0; j < vec[0].size(); j++) { transposed[j][i] = vec[i][j]; } } return transposed; }(vec))
#define zip_with(vec1, vec2, func) ([](const std::vector<int>& vec1, const std::vector<int>& vec2, auto&& func) { std::vector<int> zipped; for (int i = 0; i < std::min(vec1.size(), vec2.size()); i++) { zipped.push_back(func(vec1[i], vec2[i])); } return zipped; }(vec1, vec2, func))
#define unzip_with(zipped, func) ([](const std::vector<int>& zipped, auto&& func) { std::vector<int> vec1; std::vector<int> vec2; for (const auto& pair : zipped) { auto unzipped = func(pair); vec1.push_back(unzipped.first); vec2.push_back(unzipped.second); } return std::make_pair(vec1, vec2); }(zipped, func))
#define pair_up std::make_pair
#define tuple_up std::make_tuple
#define solo_ptr std::unique_ptr
#define shared_ptr std::shared_ptr
#define weak_ptr std::weak_ptr
#define make_solo std::make_unique
#define make_shared std::make_shared
#define make_weak std::make_shared
#define lock_guard std::lock_guard
#define unique_lock std::unique_lock
#define scoped_lock std::scoped_lock
#define mutex std::mutex
#define recursive_mutex std::recursive_mutex
#define timed_mutex std::timed_mutex
#define shared_mutex std::shared_mutex
#define condition_variable std::condition_variable
#define condition_variable_any std::condition_variable_any
#define thread std::thread
#define this_thread std::this_thread
#define async std::async
#define future std::future
#define promise std::promise
#define packaged_task std::packaged_task
#define atomic std::atomic
#define atomic_flag std::atomic_flag
#define atomic_bool std::atomic<bool>
#define atomic_char std::atomic<char>
#define atomic_int std::atomic<int>
#define atomic_long std::atomic<long>
#define atomic_llong std::atomic<long long>
#define atomic_uchar std::atomic<unsigned char>
#define atomic_ushort std::atomic<unsigned short>
#define atomic_uint std::atomic<unsigned int>
#define atomic_ulong std::atomic<unsigned long>
#define atomic_ullong std::atomic<unsigned long long>
#define atomic_float std::atomic<float>
#define atomic_double std::atomic<double>
#define atomic_long_double std::atomic<long double>
#define atomic_thread_fence std::atomic_thread_fence
#define atomic_signal_fence std::atomic_signal_fence
#define memory_order_relaxed std::memory_order_relaxed
#define memory_order_consume std::memory_order_consume
#define memory_order_acquire std::memory_order_acquire
#define memory_order_release std::memory_order_release
#define memory_order_acq_rel std::memory_order_acq_rel
#define memory_order_seq_cst std::memory_order_seq_cst
#define lock std::lock
#define unlock std::unlock
#define try_lock std::try_lock
#define join std::join
#define detach std::detach
#define hardware_concurrency std::thread::hardware_concurrency
#define yield std::this_thread::yield
#define sleep_for std::this_thread::sleep_for
#define sleep_until std::this_thread::sleep_until
#define get_id std::this_thread::get_id
#define thread_local thread_local
#define once_flag std::once_flag
#define call_once std::call_once
#define once std::call_once
#define thread_safe static std::mutex mutex; std::lock_guard<std::mutex> lock(mutex);
#define thread_unsafe static std::mutex mutex; std::unique_lock<std::mutex> lock(mutex, std::defer_lock);
#define thread_safe_block(lock) std::lock_guard<std::mutex> lock(mutex);
#define thread_unsafe_block(lock) std::unique_lock<std::mutex> lock(mutex, std::defer_lock);
#define thread_safe_function(func) ([]( auto&& func) { thread_safe; func(); }(func))
#define thread_unsafe_function(func) ([]( auto&& func) { thread_unsafe; func(); }(func))
#define thread_safe_lambda(lambda) ([]( auto&& lambda) { thread_safe; lambda(); }(lambda))
#define thread_unsafe_lambda(lambda) ([]( auto&& lambda) { thread_unsafe; lambda(); }(lambda))
#define thread_safe_class(class_name) class class_name { public: class_name() { thread_safe; } ~class_name() { thread_safe; } private: static std::mutex mutex; }
#define thread_unsafe_class(class_name) class class_name { public: class_name() { thread_unsafe; } ~class_name() { thread_unsafe; } private: static std::mutex mutex; }
