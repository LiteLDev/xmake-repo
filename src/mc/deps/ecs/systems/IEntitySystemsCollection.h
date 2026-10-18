#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
struct ComponentInfo;
struct EntitySystemTickingMode;
struct EntitySystemsFilter;
struct ISystem;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct SystemCategory;
#endif // @header-generator platform
struct SystemInfo;
struct SystemTiming;
struct TickingSystemId;
// clang-format on

struct IEntitySystemsCollection {
public:
    // IEntitySystemsCollection inner types define
    using SystemIndex = uint;

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IEntitySystemsCollection() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode) = 0;
#else // @header-generator platform
    virtual void registerTickingSystem(
        ::gsl::span<::Bedrock::typeid_t<::SystemCategory> const> categories,
        ::std::unique_ptr<::ITickingSystem>                      system,
        ::SystemInfo const&                                      info,
        ::EntitySystemTickingMode                                tickingMode
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void registerSystem(std::unique_ptr<ISystem>, ::SystemInfo const&) = 0;
#else // @header-generator platform
    virtual void registerSystem(::std::unique_ptr<::ISystem> system, ::SystemInfo const& info) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void foreachSystem(std::function<void (ISystem&)> const&) = 0;
#else // @header-generator platform
    virtual void foreachSystem(::std::function<void(::ISystem&)> const& callback) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void foreachTickingSystem(::EntitySystemsFilter const&, std::function<void (ITickingSystem&, TickingSystemId)> const&, bool) = 0;
#else // @header-generator platform
    virtual void foreachTickingSystem(
        ::EntitySystemsFilter const&                                       filter,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const& callback,
        bool                                                               captureTimings
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void foreachSingleTickingSystem(::EntitySystemsFilter const&, std::function<void (ITickingSystem&, TickingSystemId)> const&, bool) = 0;
#else // @header-generator platform
    virtual void foreachSingleTickingSystem(
        ::EntitySystemsFilter const&                                       filter,
        ::std::function<void(::ITickingSystem&, ::TickingSystemId)> const& callback,
        bool                                                               captureTimings
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getLargestSystemIndex() const = 0;
#else // @header-generator platform
    virtual uint64 getLargestSystemIndex() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId) const = 0;
#else // @header-generator platform
    virtual ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId id) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ITickingSystem* getTickingSystemForTickingSystemId(::TickingSystemId) const = 0;
#else // @header-generator platform
    virtual ::ITickingSystem* getTickingSystemForTickingSystemId(::TickingSystemId id) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ComponentInfo const* getComponentInfoForId(uint) const = 0;
#else // @header-generator platform
    virtual ::ComponentInfo const* getComponentInfoForId(uint id) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void foreachComponentInfo(std::function<void (uint, const ComponentInfo&)> const&) const = 0;
#else // @header-generator platform
    virtual void foreachComponentInfo(::std::function<void(uint, ::ComponentInfo const&)> const& callback) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const = 0;
#else // @header-generator platform
    virtual bool hasSingleTickCategory(::Bedrock::typeid_t<::SystemCategory> const category) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<SystemTiming> gatherSystemTimings() const = 0;
#else // @header-generator platform
    virtual ::std::vector<::SystemTiming> gatherSystemTimings() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool _isValidIndex(uint) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValidTickingSystemId(::TickingSystemId) const;
#else // @header-generator platform
    virtual bool _isValidIndex(uint index) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};
