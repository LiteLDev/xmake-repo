#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/network/packet/StartGamePacketPayload.h"
#include "mc/network/packet/cerealize/core/SerializationMode.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StartGamePacket : public ::ll::PayloadPacket<::StartGamePacketPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SerializationMode> mSerializationMode;
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    StartGamePacket& operator=(StartGamePacket const&);
    StartGamePacket(StartGamePacket const&);
#else // @header-generator platform
    StartGamePacket();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~StartGamePacket();
#else // @header-generator platform
    virtual ::MinecraftPacketIds getId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::MinecraftPacketIds getId() const;
#else // @header-generator platform
    virtual ::std::string_view getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string_view getName() const;
#else // @header-generator platform
    virtual ::SerializationMode getSerializationMode() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getMaxSize() const;
#else // @header-generator platform
    virtual void setSerializationMode(::SerializationMode mode) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeWithSerializationMode(::BinaryStream&, ::cereal::ReflectionCtx const&, std::optional<SerializationMode>) const;
#else // @header-generator platform
    virtual void writeWithSerializationMode(
        ::BinaryStream&                      stream,
        ::cereal::ReflectionCtx const&       reflectionCtx,
        ::std::optional<::SerializationMode> overrideMode
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&) const;
#else // @header-generator platform
    virtual void write(::BinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void write(::BinaryStream&, ::cereal::ReflectionCtx const&) const;
#else // @header-generator platform
    virtual void write(::BinaryStream& stream) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    read(::ReadOnlyBinaryStream& bitStream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool disallowBatching() const;
#else // @header-generator platform
    virtual bool disallowBatching() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::SerializationMode getSerializationMode() const;
#else // @header-generator platform
    virtual uint64 getMaxSize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setSerializationMode(::SerializationMode);
#else // @header-generator platform
    virtual ::std::string toString() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string toString() const;
#else // @header-generator platform
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&);

    virtual ::Bedrock::Result<void, std::error_code> _read(::ReadOnlyBinaryStream&, ::cereal::ReflectionCtx const&);
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::Result<void>
    _read(::ReadOnlyBinaryStream& stream, ::cereal::ReflectionCtx const& reflectionCtx) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit StartGamePacket(::StartGamePacketPayload);
#else // @header-generator platform
    MCAPI explicit StartGamePacket(::StartGamePacketPayload payload);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::StartGamePacketPayload);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::StartGamePacketPayload payload);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::MinecraftPacketIds $getId() const;
#else // @header-generator platform
    MCFOLD ::MinecraftPacketIds $getId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string_view $getName() const;
#else // @header-generator platform
    MCAPI ::std::string_view $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getMaxSize() const;
#else // @header-generator platform
    MCAPI ::SerializationMode $getSerializationMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeWithSerializationMode(
        ::BinaryStream&,
        ::cereal::ReflectionCtx const&,
        std::optional<SerializationMode>
#else // @header-generator platform
    MCAPI void $setSerializationMode(::SerializationMode mode);

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
    MCFOLD bool $isValid() const;
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
