#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorFactoryData.h"
#include "mc/world/actor/ActorType.h"
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorFactoryData;
#endif // @header-generator platform
struct ActorInfo;
// clang-format on

class ActorFactory {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>                                                  mLevel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<IEntityInitializer>>               mEntityInitializer;
    ::ll::UntypedStorage<8, 24>                                                  mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, ActorFactoryData>> mFactoryFunctions;
    ::ll::TypedStorage<8, 24, std::set<std::string>>                             mExperimentalEntities;
    ::ll::TypedStorage<8, 24, std::vector<ActorFactoryData>>                     mVanillaActors;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorComponentFactory>>             mComponentFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorGoalFactory>>                  mGoalFactory;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ActorMigratedDefinitionFactory>>    mActorMigratedFactory;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>>                  mLevel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IEntityInitializer>>                 mEntityInitializer;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ActorDefinitionGroup>>      mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorFactoryData>> mFactoryFunctions;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                               mExperimentalEntities;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorFactoryData>>                       mVanillaActors;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorComponentFactory>>               mComponentFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorGoalFactory>>                    mGoalFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorMigratedDefinitionFactory>>      mActorMigratedFactory;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ActorFactory();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ActorFactory();
#else // @header-generator platform
    virtual ~ActorFactory() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorFactory(::gsl::not_null<Bedrock::NonOwnerPointer<Level>>, ::Experiments const&);
#else // @header-generator platform
    MCAPI ActorFactory(::Bedrock::NotNullNonOwnerPtr<::Level> level, ::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _buildSummonableActorList(
        ::Experiments const&,
        std::function<void(const std::string&, const ActorFactoryData&)>
#else // @header-generator platform
    MCAPI void _buildSummonableActorList(
        ::Experiments const&                                                   experiments,
        ::std::function<void(::std::string const&, ::ActorFactoryData const&)> callback
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> _constructActor(
        ::ActorDefinitionIdentifier const&,
        ::Vec3 const&,
        ::Vec2 const&,
        std::vector<std::string> const*
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> _constructActor(
        ::ActorDefinitionIdentifier const&  identifier,
        ::Vec3 const&                       position,
        ::Vec2 const&                       rotation,
        ::std::vector<::std::string> const* previousDefinitions
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _loadDefinitionGroups(::ActorDefinitionGroup*);
#else // @header-generator platform
    MCAPI void _loadDefinitionGroups(::ActorDefinitionGroup* group);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void applyEntityInitializer(std::unique_ptr<Actor>, ::EntityContext&) const;
#else // @header-generator platform
    MCAPI void _loadDefinitionsHelper();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::pair<std::string, const ActorDefinitionIdentifier*>>
           buildSummonEntityTypeEnum(::Experiments const&) const;
#else // @header-generator platform
    MCAPI void applyEntityInitializer(::std::unique_ptr<::Actor> actor, ::EntityContext& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearDefinitionGroup();
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> clientCreateDisplayActor(
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext>
    clientCreateDisplayActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> createActor(
        ::std::string const&               method,
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext>
    createActor(std::string const&, ::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> createBornActor(::ActorDefinitionIdentifier const& identifier, ::Actor* parent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> createBornActor(::ActorDefinitionIdentifier const&, ::Actor*);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext>
    createBornActor(::ActorDefinitionIdentifier const& identifier, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> createBornActor(::ActorDefinitionIdentifier const&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> createSpawnedActor(
        ::ActorDefinitionIdentifier const& identifier,
        ::Actor*                           spawner,
        ::Vec3 const&                      position,
        ::Vec2 const&                      rotation
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext>
    createSpawnedActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&, ::Vec2 const&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext>
    createTransformedActor(::ActorDefinitionIdentifier const& identifier, ::Actor* from);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> createSummonedActor(::ActorDefinitionIdentifier const&, ::Actor*, ::Vec3 const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void digestIdentifierListFromServer(::std::vector<::ActorInfo> const& identifierList);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::OwnerPtr<EntityContext> createTransformedActor(::ActorDefinitionIdentifier const&, ::Actor*);
#else // @header-generator platform
    MCAPI void init(::Experiments const& experiments);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void digestIdentifierListFromServer(std::vector<ActorInfo> const&);
#else // @header-generator platform
    MCAPI ::OwnerPtr<::EntityContext> loadActor(
        ::CompoundTag*                tag,
        ::DataLoadHelper&             dataLoadHelper,
        ::DimensionHeightRange const& heightRange,
        ::LevelChunk const*           levelChunk
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void setVanillaActors(::std::vector<::ActorFactoryData> vanillaActors);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void fillFactoryData(
        ::ActorDefinitionIdentifier const&,
        ::ActorDefinitionIdentifier const&,
        std::unordered_map<std::string, ActorFactoryData> const&,
        ::ActorFactoryData&
    );
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void fillFactoryData(
        ::ActorDefinitionIdentifier const&                             identifier,
        ::ActorDefinitionIdentifier const&                             baseIdentifier,
        ::std::unordered_map<::std::string, ::ActorFactoryData> const& factoryFunctions,
        ::ActorFactoryData&                                            data
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Actor* fixLegacyEntity(::BlockSource&, ::CompoundTag const*);
#else // @header-generator platform
    MCAPI static ::Actor* fixLegacyEntity(::BlockSource& region, ::CompoundTag const* tag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Level> level, ::Experiments const& experiments);
#endif // @header-generator platform
    // NOLINTEND
};
