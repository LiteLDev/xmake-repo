#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
#if defined(LL_PLAT_A) // @header-generator platform
class ICerealDefinitionSerializer;
#else // @header-generator platform
#endif // @header-generator platform
class MinEngineVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityComponentFactoryCerealBase : public ::EntityComponentFactoryBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ICerealDefinitionSerializer>>> mDefinitionSerializers;
    ::ll::UntypedStorage<8, 24> mCtx;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk8f50f9;
    ::ll::UntypedStorage<8, 24> mUnkd08b5d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EntityComponentFactoryCerealBase& operator=(EntityComponentFactoryCerealBase const&);
    EntityComponentFactoryCerealBase(EntityComponentFactoryCerealBase const&);
#endif // @header-generator platform
    EntityComponentFactoryCerealBase();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityComponentFactoryCerealBase();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit EntityComponentFactoryCerealBase(::cereal::ReflectionCtx&);

    MCNAPI ::cereal::ReflectionCtx& cerealContext();

    MCNAPI void
    serializeComponentDefinitions(::DefinitionInstanceGroup&, ::CompoundTag const&, ::MinEngineVersion const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit EntityComponentFactoryCerealBase(::cereal::ReflectionCtx& ctx);

    MCNAPI void serializeComponentDefinitions(
        ::DefinitionInstanceGroup& outputDefinitions,
        ::CompoundTag const&       input,
        ::MinEngineVersion const&  minEngineVersion
    ) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::cereal::ReflectionCtx& ctx);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
