#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

class BindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactory();

    virtual std::function<bool()> getBooleanBinding(uint) const = 0;

    virtual std::function<float()> getFloatBinding(uint) const = 0;

    virtual std::function<std::string()> getStringBinding(uint) const = 0;

    virtual std::function<glm::vec<2, float, (glm::qualifier)0>()> getPointBinding(uint) const = 0;

    virtual std::function<RectangleArea()> getAreaBinding(uint) const = 0;

    virtual std::function<void(RectangleArea)> getDynamicAreaBinding(uint) const = 0;

    virtual std::function<void(float)> getFloatSetter(uint) const = 0;

    virtual void setCustomAreaBinding(std::string const&, ::RectangleArea) = 0;

    virtual void removeCustomAreaBinding(std::string const&) = 0;

    virtual std::vector<uint> getCustomAreaBindingNames() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class RectangleArea;
// clang-format on

class BindingFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingFactory() = default;

    virtual ::std::function<bool()> getBooleanBinding(uint name) const = 0;

    virtual ::std::function<float()> getFloatBinding(uint name) const = 0;

    virtual ::std::function<::std::string()> getStringBinding(uint name) const = 0;

    virtual ::std::function<::glm::vec2()> getPointBinding(uint name) const = 0;

    virtual ::std::function<::RectangleArea()> getAreaBinding(uint name) const = 0;

    virtual ::std::function<void(::RectangleArea)> getDynamicAreaBinding(uint name) const = 0;

    virtual ::std::function<void(float)> getFloatSetter(uint name) const = 0;

    virtual void setCustomAreaBinding(::std::string const& name, ::RectangleArea area) = 0;

    virtual void removeCustomAreaBinding(::std::string const& name) = 0;

    virtual ::std::vector<uint> getCustomAreaBindingNames() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class BindingFactory {};
#endif // @header-generator platform
#endif // @header-generator platform
