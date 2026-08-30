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
    // clang-format off
    virtual ~IEntitySystemsCollection() = default;

    virtual void registerTickingSystem(::gsl::span<const Bedrock::typeid_t<SystemCategory>>, std::unique_ptr<ITickingSystem>, ::SystemInfo const&, ::EntitySystemTickingMode) = 0;

    virtual void registerSystem(std::unique_ptr<ISystem>, ::SystemInfo const&) = 0;

    virtual void foreachSystem(std::function<void (ISystem&)> const&) = 0;

    virtual void foreachTickingSystem(::EntitySystemsFilter const&, std::function<void (ITickingSystem&, TickingSystemId)> const&, bool) = 0;

    virtual void foreachSingleTickingSystem(::EntitySystemsFilter const&, std::function<void (ITickingSystem&, TickingSystemId)> const&, bool) = 0;

    virtual ulong getLargestSystemIndex() const = 0;

    virtual ::SystemInfo const* getSystemInfoForTickingSystemId(::TickingSystemId) const = 0;

    virtual ::ITickingSystem* getTickingSystemForTickingSystemId(::TickingSystemId) const = 0;

    virtual ::ComponentInfo const* getComponentInfoForId(uint) const = 0;

    virtual void foreachComponentInfo(std::function<void (uint, const ComponentInfo&)> const&) const = 0;

    virtual bool hasSingleTickCategory(::Bedrock::typeid_t<SystemCategory> const) const = 0;

    virtual std::vector<SystemTiming> gatherSystemTimings() const = 0;

    virtual bool _isValidIndex(uint) const = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isValidTickingSystemId(::TickingSystemId) const;
    // NOLINTEND
};
