#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/state/PropertyContainer.h"
#include "mc/world/actor/state/PropertyMetadata.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PropertyContainer;
#endif // @header-generator platform
class PropertyGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class PropertyMetadata;
#else // @header-generator platform
#endif // @header-generator platform
class RenderParams;
class Tag;
#if defined(LL_PLAT_A) // @header-generator platform
struct MolangScriptArg;
#else // @header-generator platform
#endif // @header-generator platform
struct PropertySyncData;
// clang-format on

class PropertyComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<const PropertyGroup>>> mPropertyGroup;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyIntProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyFloatProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyBoolProperties;
    ::ll::TypedStorage<8, 8, std::bitset<32>>                                        mDirtyEnumIndexProperties;
    ::ll::TypedStorage<1, 1, bool>                                                   mEverythingDirty;
    ::ll::TypedStorage<8, 112, ::PropertyContainer>                                  mPropertyContainer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>>> mPropertyGroup;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyIntProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyFloatProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyBoolProperties;
    ::ll::TypedStorage<4, 4, ::std::bitset<32>>                                          mDirtyEnumIndexProperties;
    ::ll::TypedStorage<1, 1, bool>                                                       mEverythingDirty;
    ::ll::TypedStorage<8, 120, ::PropertyContainer>                                      mPropertyContainer;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyComponent& operator=(PropertyComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PropertyComponent(PropertyComponent const&);
#endif // @header-generator platform
    PropertyComponent();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyComponent(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
#else // @header-generator platform
    MCAPI PropertyComponent(::PropertyComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI PropertyComponent(
        ::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup,
        ::RenderParams&                                           renderParams
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyPendingChanges(std::unordered_map<ulong, std::variant<int, float, bool, ulong>> const&);
#else // @header-generator platform
    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getBool(ulong) const;
#else // @header-generator platform
    MCAPI void
    applyPendingChanges(::std::unordered_map<uint64, ::std::variant<int, float, bool, uint64>> const& pendingChanges);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float getFloat(ulong) const;
#else // @header-generator platform
    MCAPI bool getBool(uint64 h) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getInt(ulong) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::PropertyMetadata::ContainedType getPropertyType(uint64 h) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getMolangValue(ulong, ::MolangScriptArg&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::HashedString const& getString(uint64 h) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertyMetadata::ContainedType getPropertyType(ulong) const;
#else // @header-generator platform
    MCAPI ::PropertySyncData packAllSyncData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getString(ulong) const;
#else // @header-generator platform
    MCAPI ::PropertySyncData packDirtySyncData();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasDirtyProperties() const;
#else // @header-generator platform
    MCAPI void readLoadedProperties(::CompoundTag const& loadedPropertyTag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PropertySyncData packAllSyncData() const;

    MCNAPI ::PropertySyncData packDirtySyncData();

    MCNAPI void readLoadedProperties(::CompoundTag const&);

    MCNAPI void setAliasProperties(
        std::unordered_map<HashedString, std::shared_ptr<Tag>> const&,
        std::string const&,
        std::string const&
#else // @header-generator platform
    MCAPI void setAliasProperties(
        ::std::unordered_map<::HashedString, ::std::shared_ptr<::Tag>> const& aliasProperties,
        ::std::string const&                                                  aliasName,
        ::std::string const&                                                  canonicalName
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<bool> tryGetBool(ulong) const;
#else // @header-generator platform
    MCAPI ::std::optional<bool> tryGetBool(uint64 h) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<float> tryGetFloat(ulong) const;

    MCNAPI std::optional<int> tryGetInt(ulong) const;

    MCNAPI ::HashedString const* tryGetString(ulong) const;

    MCNAPI std::optional<std::variant<int, float, bool, std::string>> tryGetValueVariant(ulong) const;

    MCNAPI ~PropertyComponent();
#else // @header-generator platform
    MCAPI ::HashedString const* tryGetString(uint64 h) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::gsl::not_null<std::shared_ptr<const PropertyGroup>>, ::RenderParams&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $ctor(::PropertyComponent&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::gsl::not_null<::std::shared_ptr<::PropertyGroup const>> propertyGroup, ::RenderParams& renderParams);
#endif
#endif // @header-generator platform
    // NOLINTEND
};
