#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/ChunkBlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockActor;
class IVanillaRenderBlockActorComponent;
class IVanillaTickBlockActorComponent;
// clang-format on

class LevelChunkBlockActorStorage {
public:
    // LevelChunkBlockActorStorage inner types declare
    // clang-format off
    struct VanillaTickBlockActorComponent;
    // clang-format on

    // LevelChunkBlockActorStorage inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum TrackingMode : uint {
#else // @header-generator platform
    enum class TrackingMode : int {
#endif // @header-generator platform
        None                = 0,
        PermanentlyRendered = 1,
    };

    struct VanillaTickBlockActorComponent {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 4, ::ChunkBlockPos>                    mChunkBlockPos;
        ::ll::TypedStorage<8, 8, ::IVanillaTickBlockActorComponent*> mComponent;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    using sub_type = ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool const> mTrackPermanentlyRendered;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ChunkBlockPos, std::shared_ptr<BlockActor>>> mMap;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>>> mVanillaRenderBlockActorComponents;
    ::ll::TypedStorage<8, 40, std::unordered_set<BlockPos>> mPermanentRenderingLocations;
    ::ll::TypedStorage<8, 24, std::vector<LevelChunkBlockActorStorage::VanillaTickBlockActorComponent>> mVanillaTickBlockActorComponents;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ChunkBlockPos, ::std::shared_ptr<::BlockActor>>> mMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::IVanillaRenderBlockActorComponent*>>>
                                                                mVanillaRenderBlockActorComponents;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::BlockPos>> mPermanentRenderingLocations;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelChunkBlockActorStorage::VanillaTickBlockActorComponent>>
        mVanillaTickBlockActorComponents;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LevelChunkBlockActorStorage& operator=(LevelChunkBlockActorStorage const&);
    LevelChunkBlockActorStorage(LevelChunkBlockActorStorage const&);
#endif // @header-generator platform
    LevelChunkBlockActorStorage();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addVanillaRenderBlockActorComponent(::BlockActor&);
#else // @header-generator platform
    MCAPI ::std::pair<
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>,
        bool>
    emplace(::ChunkBlockPos pos, ::std::shared_ptr<::BlockActor> blockActor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addVanillaTickBlockActorComponent(::ChunkBlockPos const&, ::BlockActor&);
#else // @header-generator platform
    MCAPI ::std::_List_const_iterator<::std::_List_val<
        ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>>
    erase(
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::ChunkBlockPos const, ::std::shared_ptr<::BlockActor>>>>> ite
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeVanillaRenderBlockActorComponent(::BlockActor&);
#else // @header-generator platform
    MCAPI uint64 erase(::ChunkBlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _removeVanillaTickBlockActorComponent(::ChunkBlockPos const&, ::BlockActor&);
#else // @header-generator platform
    MCAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           begin() const;
#else // @header-generator platform
    MCAPI ~LevelChunkBlockActorStorage();
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           end() const;

    MCNAPI std::__hash_map_const_iterator<std::__hash_const_iterator<
        std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
           erase(
            std::__hash_map_const_iterator<std::__hash_const_iterator<
                   std::__hash_node<std::__hash_value_type<ChunkBlockPos, std::shared_ptr<BlockActor>>, void*>*>>
        );

    MCNAPI std::vector<gsl::not_null<IVanillaRenderBlockActorComponent*>> const&
           getVanillaRenderBlockActorComponents() const;

    MCNAPI ::LevelChunkBlockActorStorage& operator=(::LevelChunkBlockActorStorage&&);

    MCNAPI std::unordered_set<BlockPos> const& permanentRenderingLocations() const;
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
