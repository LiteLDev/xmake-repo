#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/entity/factory/EntityComponentFactoryBase.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class DefinitionInstanceGroup;
class ICerealDefinitionSerializer;
class MinEngineVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class EntityComponentFactoryCerealBase : public ::EntityComponentFactoryBase {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<ICerealDefinitionSerializer>>> mDefinitionSerializers;
    ::ll::UntypedStorage<8, 24> mCtx;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    EntityComponentFactoryCerealBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EntityComponentFactoryCerealBase();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EntityComponentFactoryCerealBase(::cereal::ReflectionCtx&);

    MCNAPI ::cereal::ReflectionCtx& cerealContext();

    MCNAPI void
    serializeComponentDefinitions(::DefinitionInstanceGroup&, ::CompoundTag const&, ::MinEngineVersion const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
