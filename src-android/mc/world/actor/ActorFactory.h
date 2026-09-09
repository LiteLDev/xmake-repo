#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorFactoryData.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorComponentFactory;
class ActorDefinitionGroup;
class ActorGoalFactory;
class ActorMigratedDefinitionFactory;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class DimensionHeightRange;
class EntityContext;
class Experiments;
class IEntityInitializer;
class Level;
class LevelChunk;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorInfo;
// clang-format on

class ActorFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                  mLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IEntityInitializer>>               mEntityInitializer;
    ::ll::UntypedStorage<8, 24>                                                  mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorFactoryData>> mFactoryFunctions;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                             mExperimentalEntities;
    ::ll::TypedStorage<8, 24, std::vector<ActorFactoryData>>                     mVanillaActors;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorComponentFactory>>             mComponentFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorGoalFactory>>                  mGoalFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorMigratedDefinitionFactory>>    mActorMigratedFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorFactory();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorFactory(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>, ::Experiments const&);

    MCNAPI void _buildSummonableActorList(
        ::Experiments const&,
        std::function<void(const std::string&, const ActorFactoryData&)>
    ) const;

    MCNAPI ::OwnerPtr<EntityContext> _constructActor(
        ::ActorDefinitionIdentifier const&,
        ::Vec3 const&,
        ::Vec2 const&,
        std::vector<std::string> const*
    ) const;

    MCNAPI void _loadDefinitionGroups(::ActorDefinitionGroup*);

    MCNAPI void applyEntityInitializer(std::unique_ptr<Actor>, ::EntityContext&) const;

    MCNAPI std::vector<std::pair<std::string, const ActorDefinitionIdentifier*>>
           buildSummonEntityTypeEnum(::Experiments const&) const;

    MCNAPI void clearDefinitionGroup();

    MCNAPI ::OwnerPtr<EntityContext>
    clientCreateDisplayActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);

    MCNAPI ::OwnerPtr<EntityContext>
    createActor(std::string const&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);

    MCNAPI ::OwnerPtr<EntityContext> createBornActor(::ActorDefinitionIdentifier const&, ::Actor*);

    MCNAPI ::OwnerPtr<EntityContext> createBornActor(::ActorDefinitionIdentifier const&, ::BlockPos const&);

    MCNAPI ::OwnerPtr<EntityContext>
    createSpawnedActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);

    MCNAPI ::OwnerPtr<EntityContext> createSummonedActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&);

    MCNAPI ::OwnerPtr<EntityContext> createTransformedActor(::ActorDefinitionIdentifier const&, ::Actor*);

    MCNAPI void digestIdentifierListFromServer(std::vector<ActorInfo> const&);

    MCNAPI ::ActorGoalFactory& getGoalFactory();

    MCNAPI ::ActorMigratedDefinitionFactory& getMigratedDefinitionFactory();

    MCNAPI void init(::Experiments const&);

    MCNAPI ::OwnerPtr<EntityContext> loadActor(::CompoundTag*, ::DataLoadHelper&);

    MCNAPI ::OwnerPtr<EntityContext> loadActor(::CompoundTag*, ::DataLoadHelper&, ::DimensionHeightRange const&);

    MCNAPI ::OwnerPtr<EntityContext>
    loadActor(::CompoundTag*, ::DataLoadHelper&, ::DimensionHeightRange const&, ::LevelChunk const*);

    MCNAPI ::ActorType lookupEntityType(::ActorDefinitionIdentifier const&) const;

    MCNAPI void setDefinitionGroup(::ActorDefinitionGroup*);

    MCNAPI void setEntityInitializer(std::shared_ptr<IEntityInitializer>);

    MCNAPI void setVanillaActors(std::vector<ActorFactoryData>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void fillFactoryData(
        ::ActorDefinitionIdentifier const&,
        ::ActorDefinitionIdentifier const&,
        std::unordered_map<std::string, ActorFactoryData> const&,
        ::ActorFactoryData&
    );

    MCNAPI static ::Actor* fixLegacyEntity(::BlockSource&, ::CompoundTag const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>, ::Experiments const&);
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
