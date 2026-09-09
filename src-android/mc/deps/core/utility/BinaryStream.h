#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/platform/brstd/function_ref.h"

class BinaryStream : public ::ReadOnlyBinaryStream {
public:
    // BinaryStream inner types declare
    // clang-format off
    struct ConditionBlock;
    // clang-format on

    // BinaryStream inner types define
    struct ConditionBlock {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>        controlValue;
        ::ll::UntypedStorage<8, 16>           writeCondition;
        ::ll::TypedStorage<8, 8, char const*> docFieldName;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConditionBlock();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::string&> mBuffer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~BinaryStream();

    virtual void writeBool(bool, char const*, char const*);

    virtual void writeByte(uchar, char const*, char const*);

    virtual void writeSignedByte(schar, char const*, char const*);

    virtual void writeUnsignedShort(ushort, char const*, char const*);

    virtual void writeSignedShort(short, char const*, char const*);

    virtual void writeUnsignedInt(uint, char const*, char const*);

    virtual void writeSignedBigEndianInt(int, char const*, char const*);

    virtual void writeSignedInt(int, char const*, char const*);

    virtual void writeUnsignedInt64(ulong, char const*, char const*);

    virtual void writeSignedInt64(long, char const*, char const*);

    virtual void writeUnsignedVarInt(uint, char const*, char const*);

    virtual void writeUnsignedVarInt64(ulong, char const*, char const*);

    virtual void writeVarInt(int, char const*, char const*);

    virtual void writeVarInt64(long, char const*, char const*);

    virtual void writeDouble(double, char const*, char const*);

    virtual void writeFloat(float, char const*, char const*);

    virtual void writeFixedFloat(float, char const*, char const*, double);

    virtual void writeNormalizedFloat(float, char const*, char const*);

    virtual void writeString(std::string_view, char const*, char const*);

    virtual void writeIf(bool, char const*, ::brstd::function_ref<void (BinaryStream&)> const&, std::optional<brstd::function_ref<void (BinaryStream&), void (BinaryStream&)>> const&);

    virtual void writeConditional(char const*, std::initializer_list<BinaryStream::ConditionBlock>&&, std::optional<brstd::function_ref<void (BinaryStream&), void (BinaryStream&)>> const&);

    virtual void branchingWrite_DEPRECATED(std::function<void (BinaryStream&, int)>&&, int, std::vector<int> const&, char const*);

    virtual void branchingWrite_DEPRECATED(std::function<void (BinaryStream&, int)>&&, int, int, int, char const*);

    virtual bool writeTypeBegin_DocHelper(char const*, char const*, char const*);

    virtual void writeTypeEnd_DocHelper();

    virtual void writeEnum_DocHelper(char const*, char const*);

    virtual void _writeArray(std::function<void (BinaryStream&)>&&, std::function<void (BinaryStream&)>&&, char const*, char const*);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BinaryStream();

    MCNAPI BinaryStream(std::string&, bool);

    MCNAPI void _writeInteger(uchar, char const*, char const*);

    MCNAPI void _writeInteger(ushort, char const*, char const*);

    MCNAPI void _writeInteger(int, char const*, char const*);

    MCNAPI std::string getAndReleaseData();

    MCNAPI void reset();

    MCNAPI void writeRawBytes(::buffer_span<uchar>, char const*, char const*);

    MCNAPI void writeUnsignedChar(uchar, char const*, char const*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::string&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $writeBool(bool, char const*, char const*);

    MCNAPI void $writeByte(uchar, char const*, char const*);

    MCNAPI void $writeSignedByte(schar, char const*, char const*);

    MCNAPI void $writeUnsignedShort(ushort, char const*, char const*);

    MCNAPI void $writeSignedShort(short, char const*, char const*);

    MCNAPI void $writeUnsignedInt(uint, char const*, char const*);

    MCNAPI void $writeSignedBigEndianInt(int, char const*, char const*);

    MCNAPI void $writeSignedInt(int, char const*, char const*);

    MCNAPI void $writeUnsignedInt64(ulong, char const*, char const*);

    MCNAPI void $writeSignedInt64(long, char const*, char const*);

    MCNAPI void $writeUnsignedVarInt(uint, char const*, char const*);

    MCNAPI void $writeUnsignedVarInt64(ulong, char const*, char const*);

    MCNAPI void $writeVarInt(int, char const*, char const*);

    MCNAPI void $writeVarInt64(long, char const*, char const*);

    MCNAPI void $writeDouble(double, char const*, char const*);

    MCNAPI void $writeFloat(float, char const*, char const*);

    MCNAPI void $writeFixedFloat(float, char const*, char const*, double);

    MCNAPI void $writeNormalizedFloat(float, char const*, char const*);

    MCNAPI void $writeString(std::string_view, char const*, char const*);

    MCNAPI void $writeIf(
        bool,
        char const*,
        ::brstd::function_ref<void(BinaryStream&)> const&,
        std::optional<brstd::function_ref<void(BinaryStream&), void(BinaryStream&)>> const&
    );

    MCNAPI void $writeConditional(
        char const*,
        std::initializer_list<BinaryStream::ConditionBlock>&&,
        std::optional<brstd::function_ref<void(BinaryStream&), void(BinaryStream&)>> const&
    );

    MCNAPI void
    $branchingWrite_DEPRECATED(std::function<void(BinaryStream&, int)>&&, int, std::vector<int> const&, char const*);

    MCNAPI void $branchingWrite_DEPRECATED(std::function<void(BinaryStream&, int)>&&, int, int, int, char const*);

    MCNAPI bool $writeTypeBegin_DocHelper(char const*, char const*, char const*);

    MCNAPI void $writeTypeEnd_DocHelper();

    MCNAPI void $writeEnum_DocHelper(char const*, char const*);

    MCNAPI void
    $_writeArray(std::function<void(BinaryStream&)>&&, std::function<void(BinaryStream&)>&&, char const*, char const*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
