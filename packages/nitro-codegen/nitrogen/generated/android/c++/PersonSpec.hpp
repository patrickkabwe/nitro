///
/// PersonSpec.hpp
/// Sun Jul 14 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/react-native-nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///


#pragma once

#if __has_include(<NitroModules/HybridObject.hpp>)
#include <NitroModules/HybridObject.hpp>
#else
#error NitroModules cannot be found! Are you sure you installed react-native-nitro properly?
#endif

#include "Meal.hpp"
#include "Gender.hpp"
#include "Car.hpp"
#include "Battery.hpp"
#include "Powertrain.hpp"

/**
 * An abstract base class for `Person` (Person.nitro.ts)
 * Inherit this class to create instances of `PersonSpec` in C++.
 * @example
 * ```cpp
 * class Person: public PersonSpec {
 *   // ...
 * };
 * ```
 */
class PersonSpec: public HybridObject {
  public:
    // Constructor
    explicit PersonSpec(): HybridObject(TAG) { }

  public:
    // Properties
    virtual std::string getName() = 0;
    virtual double getAge() = 0;
    virtual bool getIsHappy() = 0;
    virtual void setIsHappy(bool isHappy) = 0;
    virtual std::vector<double> getFavouriteNumbers() = 0;
    virtual void setFavouriteNumbers(const std::vector<double>& favouriteNumbers) = 0;
    virtual std::vector<Meal> getFavouriteMeals() = 0;
    virtual void setFavouriteMeals(const std::vector<Meal>& favouriteMeals) = 0;
    virtual Gender getGender() = 0;
    virtual std::optional<Car> getCar() = 0;
    virtual void setCar(const std::optional<Car>& car) = 0;

  public:
    // Methods
    virtual void sayHi(const std::string& name) = 0;
    virtual std::future<double> goToWork() = 0;
    virtual void addWakeUpListener(const std::function<void(double)>& onWokeUp) = 0;
    virtual std::function<Battery(double, std::string, Car)> someFunc() = 0;
    virtual std::unordered_map<std::string, double> getSomeArbitraryJsonData() = 0;

  protected:
    // Tag for logging
    static constexpr auto TAG = "Person";

  private:
    // Hybrid Setup
    void loadHybridMethods() override;
};