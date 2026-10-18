#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/LeanDynamicProperty__String.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicPropertiesBlockActorComponent : public ::IBlockActorComponent {
public:
    // DynamicPropertiesBlockActorComponent inner types define
    enum class SetResult : int {
        Success              = 0,
        StorageLimitExceeded = 1,
        StorageNotFound      = 2,
    };

    using SetCallbackFn = std::function<void(
        const std::string&,
        uint,
        const std::string&,
        uint,
        const std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>*
    )>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mDataMap;
    ::ll::UntypedStorage<8, 48> mStorageBytes;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicPropertiesBlockActorComponent();

    virtual void save(::CompoundTag&) const;

    virtual void load(::CompoundTag const&, ::BlockActorVersion);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DynamicPropertiesBlockActorComponent();

    MCNAPI void _loadInception(::CompoundTag const&);

    MCNAPI std::optional<std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>>
           get(std::string const&, std::string const&) const;

    MCNAPI ulong getByteCount(std::string const&) const;

    MCNAPI ::DynamicPropertiesBlockActorComponent::SetResult remove(
        std::string const&,
        std::string const&,
        std::function<void(
            const std::string&,
            uint,
            const std::string&,
            uint,
            const std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>*
        )>
    );

    MCNAPI ::DynamicPropertiesBlockActorComponent::SetResult
    set(std::string const&,
        std::string const&,
        std::variant<double, float, bool, LeanDynamicProperty::String, Vec3> const&,
        std::function<void(
            const std::string&,
            uint,
            const std::string&,
            uint,
            const std::variant<double, float, bool, LeanDynamicProperty::String, Vec3>*
        )>);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[29]> DYNAMIC_PROPERTIES_TAG();

    MCNAPI static ::brstd::flat_map<uint, std::string, std::less<uint>, std::vector<uint>, std::vector<std::string>>&
    mBucketDictionary();

    MCNAPI static std::mutex& mDictionaryMutex();

    MCNAPI static ::brstd::flat_map<uint, std::string, std::less<uint>, std::vector<uint>, std::vector<std::string>>&
    mVariableDictionary();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $save(::CompoundTag&) const;

    MCNAPI void $load(::CompoundTag const&, ::BlockActorVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
