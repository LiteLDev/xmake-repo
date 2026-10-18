#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class SubChunkPacket : public ::ll::PayloadPacket<::SubChunkPacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SubChunkPacket();

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
#else // @header-generator platform
    SubChunkPacket()
    : ::ll::PayloadPacket<::SubChunkPacketPayload>(),
      mSerializationMode(SerializationMode::CerealOnly) {}
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // virtual functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SubChunkPacket(::SubChunkPacketPayload);
    // NOLINTEND
#else // @header-generator platform
    virtual ::MinecraftPacketIds getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SubChunkPacketPayload);
    // NOLINTEND
#else // @header-generator platform
    virtual ::std::string_view getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::SerializationMode getSerializationMode() const /*override*/;

    virtual void setSerializationMode(::SerializationMode mode) /*override*/;

    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;

    virtual void write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;

    virtual bool disallowBatching() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual uint64 getMaxSize() const /*override*/;

    virtual ::std::string toString() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MinecraftPacketIds $getId() const;
#else // @header-generator platform
    MCAPI ::MinecraftPacketIds $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $getName() const;
#else // @header-generator platform
    MCAPI ::std::string_view $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getMaxSize() const;
#else // @header-generator platform
    MCFOLD ::SerializationMode $getSerializationMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        std::optional<SerializationMode>
#else // @header-generator platform
    MCFOLD void $setSerializationMode(::SerializationMode mode);

    MCAPI void $writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::BinaryStream&) const;
#else // @header-generator platform
    MCFOLD void $write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    MCAPI void $write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void>
    $read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $disallowBatching() const;
#else // @header-generator platform
    MCFOLD bool $disallowBatching() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SerializationMode $getSerializationMode() const;
#else // @header-generator platform
    MCFOLD uint64 $getMaxSize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setSerializationMode(::SerializationMode);
#else // @header-generator platform
    MCAPI ::std::string $toString() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $toString() const;
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> $_read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
