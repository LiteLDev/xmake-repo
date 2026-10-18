#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class CompoundTag;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Vec3;
#endif // @header-generator platform
struct DynamicPropertyDefinition;
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DynamicProperties {
public:
    // DynamicProperties inner types declare
    // clang-format off
    struct PropertyCollection;
    // clang-format on

    // DynamicProperties inner types define
    struct PropertyCollection {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ulong> mByteCount;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::variant<double, float, bool, std::string, Vec3>>> mProperties;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PropertyCollection();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, uint64> mByteCount;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::std::string, ::std::variant<double, float, bool, ::std::string, ::Vec3>>>
            mProperties;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PropertyVariant = std::variant<double, float, bool, std::string, Vec3>;
#else // @header-generator platform
    using PropertyVariant = ::std::variant<double, float, bool, ::std::string, ::Vec3>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DynamicProperties::PropertyCollection>> mPropertyCollections;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::DynamicProperties::PropertyCollection>>
        mPropertyCollections;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    DynamicProperties& operator=(DynamicProperties const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearCollection(std::string const&);
#else // @header-generator platform
    MCFOLD ::DynamicProperties::PropertyCollection const*
    _getPropertyCollection(::std::string const& collectionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void deserialize(::CompoundTag const&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCFOLD ::DynamicProperties::PropertyCollection* _getPropertyCollection(::std::string const& collectionName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getCollectionCount() const;
#else // @header-generator platform
    MCAPI void clearCollection(::std::string const& collectionName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<double, float, bool, std::string, Vec3> const*
           getDynamicProperty(std::string const&, std::string const&) const;
#else // @header-generator platform
    MCAPI void deserialize(::CompoundTag const& root, ::cereal::ReflectionCtx const& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> getDynamicPropertyIds(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::variant<double, float, bool, ::std::string, ::Vec3> const*
    getDynamicProperty(::std::string const& key, ::std::string const& collectionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getPropertyCount(std::string const&) const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> getDynamicPropertyIds(::std::string const& collectionName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getTotalByteCount(std::string const&) const;
#else // @header-generator platform
    MCAPI bool removeDynamicProperty(::std::string const& key, ::std::string const& collectionName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool removeDynamicProperty(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CompoundTag> serialize(::cereal::ReflectionCtx const& ctx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CompoundTag> serialize(::cereal::ReflectionCtx const&) const;

    MCNAPI void setDynamicProperty(
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const&,
        std::string const&
#else // @header-generator platform
    MCAPI void setDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const& value,
        ::std::string const&                                              collectionName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updateCollectionName(std::string const&, std::string const&);

    MCNAPI ~DynamicProperties();
#else // @header-generator platform
    MCAPI void updateCollectionName(::std::string const& from, ::std::string const& to);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<Scripting::ArgumentOutOfBoundsError>
    validateDynamicProperty(std::string const&, std::variant<double, float, bool, std::string, Vec3> const*);
#else // @header-generator platform
    MCAPI static ::std::optional<::Scripting::ArgumentOutOfBoundsError> validateDynamicProperty(
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string validateDynamicProperty_V010(
        ::DynamicPropertyDefinition const*,
        std::string const&,
        std::variant<double, float, bool, std::string, Vec3> const*
#else // @header-generator platform
    MCAPI static ::std::string validateDynamicProperty_V010(
        ::DynamicPropertyDefinition const*                                propertyDefinition,
        ::std::string const&                                              key,
        ::std::variant<double, float, bool, ::std::string, ::Vec3> const* value
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& STORAGE_TAG();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::string const& STORAGE_TAG();
#endif // @header-generator platform
    // NOLINTEND
};
