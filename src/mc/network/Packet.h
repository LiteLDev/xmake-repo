#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/raknet/PacketPriority.h"
#include "mc/network/Compressibility.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkPeer.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class IPacketHandlerDispatcher;
#if defined(LL_PLAT_A) // @header-generator platform
class NetEventCallback;
class NetworkIdentifier;
#else // @header-generator platform
#endif // @header-generator platform
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Player;
class Actor;
class BlockPos;
class NetworkIdentifier;
struct NetworkIdentifierWithSubId;

#endif // @header-generator platform
class Packet {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
public:
    [[nodiscard]] constexpr explicit Packet(
        PacketPriority           priority    = PacketPriority::MediumPriority,
        NetworkPeer::Reliability reliability = NetworkPeer::Reliability::ReliableOrdered,
        SubClientId              clientSubId = SubClientId::PrimaryClient,
        bool                     compress    = true
    )
    : mPriority(priority),
      mReliability(reliability),
      mSenderSubId(clientSubId),
      mCompressible(compress ? Compressibility::Compressible : Compressibility::Incompressible) {}

    /**
     * Send the packet to a specific server player.
     *
     * @param player The server player to send the
     * packet to.
     */
    LLAPI void sendTo(Player const& player) const;

    /**
     * Send the packet to all relevant players in a 2D plane at a position in a given dimension.
     * @param
     * pos The position to send the packet to.
     * @param dimId The type of dimension to send the packet in.
     *
     * @param except exclude this player.
     */
    LLAPI void sendTo(BlockPos const& pos, DimensionType dimId, optional_ref<Player const> except = std::nullopt) const;

    /**
     * Send the packet to all relevant players within a specific actor.
     *
     * @param actor The actor to
     * send the packet to.
     * @param except exclude this player.
     */
    LLAPI void sendTo(Actor const& actor, optional_ref<Player const> except = std::nullopt) const;

    /**
     * Send the packet to a specific client identified by network identifier and sub-client ID.
     *
     *
     * @param id The network identifier of the client to send the packet to.
     * @param clientId The sub-client ID of
     * the client to send the packet to.
     */
    LLAPI void sendToClient(NetworkIdentifier const& identifier, ::SubClientId clientId) const;

    LLAPI void sendToClient(NetworkIdentifierWithSubId const& identifierWithSubId) const;

    /**
     * Send the packet to all clients connected to the server.
     */
    LLAPI void sendToClients() const;

    LLAPI void sendToClients(NetworkIdentifier const& exceptId, ::SubClientId exceptSubid) const;

    LLAPI void sendToServer() const;

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::PacketPriority> mPriority;
    ::ll::UntypedStorage<4, 4> mReliability;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSenderSubId;
    ::ll::TypedStorage<1, 1, bool> mIsHandled;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mReceiveTimepoint;
    ::ll::TypedStorage<8, 8, ::IPacketHandlerDispatcher const*> mHandler;
    ::ll::TypedStorage<4, 4, ::Compressibility> mCompressible;
    // clang-format on
#else // @header-generator platform
    ::PacketPriority                        mPriority;
    ::NetworkPeer::Reliability              mReliability;
    ::SubClientId                           mSenderSubId;
    mutable bool                            mIsHandled;
    ::std::chrono::steady_clock::time_point mReceiveTimepoint;
    ::IPacketHandlerDispatcher const*       mHandler;
    ::Compressibility                       mCompressible;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~Packet();
#else // @header-generator platform
    virtual ~Packet() = default;
#endif // @header-generator platform

    virtual ::MinecraftPacketIds getId() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getName() const = 0;
#else // @header-generator platform
    virtual ::std::string_view getName() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getMaxSize() const;
#else // @header-generator platform
    virtual uint64 getMaxSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> checkSize(ulong, bool) const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> checkSize(uint64 packetSize, bool receiverIsServer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeWithSerializationMode(::BinaryStream&, ::cereal::ReflectionCtx const&, std::optional<SerializationMode>) const;
#else // @header-generator platform
    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&) const = 0;
#else // @header-generator platform
    virtual void write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    virtual void write(::BinaryStream& stream) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& bitStream);
#endif // @header-generator platform

    virtual bool disallowBatching() const;

    virtual bool isValid() const;

    virtual ::SerializationMode getSerializationMode() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSerializationMode(::SerializationMode);
#else // @header-generator platform
    virtual void setSerializationMode(::SerializationMode mode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::std::string toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void handle(::NetworkIdentifier const&, ::NetEventCallback&, std::shared_ptr<Packet>&);

    MCNAPI ::Bedrock::Result<void, std::error_code>
    readNoHeader(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&, ::SubClientId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> readNoHeader(
        ::ReadOnlyBinaryStream&        bitstream,
        ::cereal::ReflectionCtx const& reflectionCtx,
        ::SubClientId const&           subid
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getMaxSize() const;
#else // @header-generator platform
    MCFOLD uint64 $getMaxSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $checkSize(ulong, bool) const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $checkSize(uint64 packetSize, bool receiverIsServer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        std::optional<SerializationMode>
#else // @header-generator platform
    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCAPI void $write(::BinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $read(::ReadOnlyBinaryStream& bitStream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $disallowBatching() const;
#else // @header-generator platform
    MCFOLD bool $disallowBatching() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SerializationMode $getSerializationMode() const;
#else // @header-generator platform
    MCFOLD ::SerializationMode $getSerializationMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSerializationMode(::SerializationMode);
#else // @header-generator platform
    MCFOLD void $setSerializationMode(::SerializationMode mode);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCFOLD ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void>
    $_read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

namespace ll {
template <class PacketPayloadT>
class PayloadPacket : public ::Packet, public PacketPayloadT {
public:
    using PayloadType = PacketPayloadT;

    template <typename... Args>
    PayloadPacket(Args&&... args) : Packet(),
                                    PacketPayloadT(std::forward<Args>(args)...) {}
};
} // namespace ll
#endif // @header-generator platform
