#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/UpdateAbilitiesPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class UpdateAbilitiesPacket : public ::ll::PayloadPacket<::UpdateAbilitiesPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~UpdateAbilitiesPacket();

    virtual ::MinecraftPacketIds getId() const;

    virtual std::string_view getName() const;

    virtual ulong getMaxSize() const;

    virtual void writeWithSerializationMode(::BinaryStream&, ::cereal::ReflectionCtx const&, std::optional<SerializationMode>) const;

    virtual void write(::BinaryStream&) const;

    virtual void write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;

    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);

    virtual bool disallowBatching() const;

    virtual bool isValid() const;

    virtual ::SerializationMode getSerializationMode() const;

    virtual void setSerializationMode(::SerializationMode);

    virtual std::string toString() const;

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit UpdateAbilitiesPacket(::UpdateAbilitiesPacketPayload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::UpdateAbilitiesPacketPayload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MinecraftPacketIds $getId() const;

    MCNAPI std::string_view $getName() const;

    MCNAPI ulong $getMaxSize() const;

    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        std::optional<SerializationMode>
    ) const;

    MCNAPI void $write(::BinaryStream&) const;

    MCNAPI void $write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);

    MCNAPI bool $disallowBatching() const;

    MCNAPI bool $isValid() const;

    MCNAPI ::SerializationMode $getSerializationMode() const;

    MCNAPI void $setSerializationMode(::SerializationMode);

    MCNAPI std::string $toString() const;

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);

    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
