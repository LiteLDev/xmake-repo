#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockComponentFactory;
class BlockComponentStorage;
class BlockType;
class CerealSchemaUpgradeSet;
class CompoundTag;
class SemVersion;
struct BlockComponentGroupDescription;
namespace JsonUtil { class EmptyClass; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockComponentDescription {
public:
    // BlockComponentDescription inner types declare
    // clang-format off
    struct InitializationContext;
    // clang-format on

    // BlockComponentDescription inner types define
    struct InitializationContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockComponentStorage&> mBlockComponentStorage;
        ::ll::TypedStorage<8, 8, ::BlockType&>             mBlockType;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitializationContext& operator=(InitializationContext const&);
        InitializationContext(InitializationContext const&);
        InitializationContext();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mInitializedFromCode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BlockComponentDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponent(::BlockComponentDescription::InitializationContext&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;

    virtual void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>&, ::BlockComponentFactory const&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void handleVersionBasedInitialization(::SemVersion const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponent(::BlockComponentDescription::InitializationContext&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;

    MCNAPI void $buildSchema(
        std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockComponentGroupDescription>>&,
        ::BlockComponentFactory const&
    ) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND
};
