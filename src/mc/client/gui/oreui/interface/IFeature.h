#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class IFeature {
public:
    // IFeature inner types define
    using OnEnabledChangedCallback = std::function<void(bool)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFeature() = default;

    virtual bool isEnabled() const = 0;

    virtual void registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, std::function<void(bool)>) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class IFeature {
public:
    // IFeature inner types define
    using OnEnabledChangedCallback = ::std::function<void(bool)>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IFeature() = default;

    virtual bool isEnabled() const = 0;

    virtual void registerIsEnabledChangedCallback(::Bedrock::PubSub::Subscription&, ::std::function<void(bool)>) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IFeature {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
