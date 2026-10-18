#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/multiplayer/ISubChunkManagerConnector.h"
#include "mc/client/multiplayer/SubChunkChange.h"
#include "mc/client/network/SubChunkInsertManager.h"
#include "mc/deps/core/math/PairHash.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/chunk/SubChunkRequestManager.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkSource;
class IPlayerDimensionTransferConnector;
class LevelChunk;
class PacketSender;
class Player;
class SubChunkPacket;
class SubChunkPacketHandler;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class SubChunkManager : public ::ISubChunkManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::pair<SubChunkPos, DimensionType>, std::vector<SubChunkChange>, mce::Math::PairHash, std::equal_to<std::pair<SubChunkPos, DimensionType>>, std::allocator<std::pair<const std::pair<SubChunkPos, DimensionType>, std::vector<SubChunkChange>>>>> mPendingSubChunkChanges;
    ::ll::UntypedStorage<8, 336> mSubChunkInsertManager;
    ::ll::TypedStorage<8, 288, ::SubChunkRequestManager> mSubChunkRequestManager;
    ::ll::UntypedStorage<8, 88> mSubChunkLoaded;
    ::ll::UntypedStorage<8, 24> mOnChangeDimensionSubscription;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SubChunkManager();

    virtual ::Bedrock::PubSub::Connector<void (ChunkSource&, LevelChunk&, short, bool)>& getOnSubChunkLoadedConnector();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void pruneSubChunkChanges(::DimensionType const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::chrono::duration<long long, std::ratio<1, 1000000000>> const& SUBCHUNK_CHANGE_TIMEOUT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(ChunkSource&, LevelChunk&, short, bool)>& $getOnSubChunkLoadedConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class SubChunkManager {};
#endif // @header-generator platform
