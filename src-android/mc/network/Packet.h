#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
class NetEventCallback;
class NetworkIdentifier;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class Packet {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::PacketPriority> mPriority;
    ::ll::UntypedStorage<4, 4> mReliability;
    ::ll::TypedStorage<1, 1, ::SubClientId> mSenderSubId;
    ::ll::TypedStorage<1, 1, bool> mIsHandled;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mReceiveTimepoint;
    ::ll::TypedStorage<8, 8, ::IPacketHandlerDispatcher const*> mHandler;
    ::ll::TypedStorage<4, 4, ::Compressibility> mCompressible;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~Packet();

    virtual ::MinecraftPacketIds getId() const = 0;

    virtual std::string_view getName() const = 0;

    virtual ulong getMaxSize() const;

    virtual ::Bedrock::Result<void, std::error_code> checkSize(ulong, bool) const;

    virtual void writeWithSerializationMode(::BinaryStream&, ::cereal::ReflectionCtx const&, std::optional<SerializationMode>) const;

    virtual void write(::BinaryStream&) const = 0;

    virtual void write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);

    virtual bool disallowBatching() const;

    virtual bool isValid() const;

    virtual ::SerializationMode getSerializationMode() const;

    virtual void setSerializationMode(::SerializationMode);

    virtual std::string toString() const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&) = 0;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void handle(::NetworkIdentifier const&, ::NetEventCallback&, std::shared_ptr<Packet>&);

    MCNAPI ::Bedrock::Result<void, std::error_code>
    readNoHeader(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&, ::SubClientId const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ulong $getMaxSize() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $checkSize(ulong, bool) const;

    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        std::optional<SerializationMode>
    ) const;

    MCNAPI void $write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&);

    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);

    MCNAPI bool $disallowBatching() const;

    MCNAPI bool $isValid() const;

    MCNAPI ::SerializationMode $getSerializationMode() const;

    MCNAPI void $setSerializationMode(::SerializationMode);

    MCNAPI std::string $toString() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
