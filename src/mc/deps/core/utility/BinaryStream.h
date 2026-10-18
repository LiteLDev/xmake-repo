#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/serialize/serialize.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/ReadOnlyBinaryStream.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/buffer_span.h"
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>        controlValue;
        ::ll::UntypedStorage<8, 16>           writeCondition;
        ::ll::TypedStorage<8, 8, char const*> docFieldName;
#else // @header-generator platform
        bool                                         controlValue;
        ::brstd::function_ref<void(::BinaryStream&)> writeCondition;
        char const*                                  docFieldName;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ConditionBlock();
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    template <typename T>
    inline void writeType(T const& x, char const* = nullptr, char const* = nullptr) {
        serialize<T>::write(x, *this);
    }

    MCTAPI void writeType(class BlockPos const&, char const*, char const*);
    MCTAPI void writeType(class Vec3 const&, char const*, char const*);
    MCTAPI void writeType(class MoveActorAbsoluteData const&, char const*, char const*);
    MCTAPI void writeType(class BaseGameVersion const&, char const*, char const*);
    MCTAPI void writeType(struct ActorLink const&, char const*, char const*);
    MCTAPI void writeType(class GameRulesChangedPacketData const&, char const*, char const*);

    BinaryStream() : ReadOnlyBinaryStream({}, true), mBuffer(mOwnedBuffer) {}
    BinaryStream(std::string& buffer) : ReadOnlyBinaryStream(buffer, false), mBuffer(buffer) {}

    void write(char const* origin, uint64 num) {
        mBuffer.append(origin, num);
        mView = mBuffer;
    }
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::string&> mBuffer;
#else // @header-generator platform
    ::std::string& mBuffer;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    BinaryStream& operator=(BinaryStream const&);
    BinaryStream(BinaryStream const&);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~BinaryStream();
#else // @header-generator platform
    virtual ~BinaryStream() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeBool(bool, char const*, char const*);
#else // @header-generator platform
    virtual void writeBool(bool value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeByte(uchar, char const*, char const*);
#else // @header-generator platform
    virtual void writeByte(uchar value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeSignedByte(schar, char const*, char const*);
#else // @header-generator platform
    virtual void writeSignedByte(schar value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUnsignedShort(ushort, char const*, char const*);
#else // @header-generator platform
    virtual void writeUnsignedShort(ushort value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeSignedShort(short, char const*, char const*);
#else // @header-generator platform
    virtual void writeSignedShort(short value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUnsignedInt(uint, char const*, char const*);
#else // @header-generator platform
    virtual void writeUnsignedInt(uint value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeSignedBigEndianInt(int, char const*, char const*);
#else // @header-generator platform
    virtual void writeSignedBigEndianInt(int value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeSignedInt(int, char const*, char const*);
#else // @header-generator platform
    virtual void writeSignedInt(int value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUnsignedInt64(ulong, char const*, char const*);
#else // @header-generator platform
    virtual void writeUnsignedInt64(uint64 value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeSignedInt64(long, char const*, char const*);
#else // @header-generator platform
    virtual void writeSignedInt64(int64 value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUnsignedVarInt(uint, char const*, char const*);
#else // @header-generator platform
    virtual void writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeUnsignedVarInt64(ulong, char const*, char const*);
#else // @header-generator platform
    virtual void writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeVarInt(int, char const*, char const*);
#else // @header-generator platform
    virtual void writeVarInt(int value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeVarInt64(long, char const*, char const*);
#else // @header-generator platform
    virtual void writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeDouble(double, char const*, char const*);
#else // @header-generator platform
    virtual void writeDouble(double value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeFloat(float, char const*, char const*);
#else // @header-generator platform
    virtual void writeFloat(float value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeFixedFloat(float, char const*, char const*, double);
#else // @header-generator platform
    virtual void writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeNormalizedFloat(float, char const*, char const*);
#else // @header-generator platform
    virtual void writeNormalizedFloat(float value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeString(std::string_view, char const*, char const*);
#else // @header-generator platform
    virtual void writeString(::std::string_view value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeIf(bool, char const*, ::brstd::function_ref<void (BinaryStream&)> const&, std::optional<brstd::function_ref<void (BinaryStream&), void (BinaryStream&)>> const&);
#else // @header-generator platform
    virtual void writeIf(
        bool controlValue,
        char const*,
        ::brstd::function_ref<void(::BinaryStream&)> const&                  writeIfTrue,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeIfFalse
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void writeConditional(char const*, std::initializer_list<BinaryStream::ConditionBlock>&&, std::optional<brstd::function_ref<void (BinaryStream&), void (BinaryStream&)>> const&);
#else // @header-generator platform
    virtual void writeConditional(
        char const*                                                          docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&&            conditions,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeDefault
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void branchingWrite_DEPRECATED(std::function<void (BinaryStream&, int)>&&, int, std::vector<int> const&, char const*);
#else // @header-generator platform
    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int,
        int,
        char const*
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void branchingWrite_DEPRECATED(std::function<void (BinaryStream&, int)>&&, int, int, int, char const*);
#else // @header-generator platform
    virtual void branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&,
        char const*
    );
#endif // @header-generator platform

    virtual bool writeTypeBegin_DocHelper(char const*, char const*, char const*);

    virtual void writeTypeEnd_DocHelper();

    virtual void writeEnum_DocHelper(char const*, char const*);

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void _writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*,
        char const*
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeBool(bool, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeBool(bool value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeByte(uchar, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeByte(uchar value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSignedByte(schar, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeSignedByte(schar value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUnsignedShort(ushort, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeUnsignedShort(ushort value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSignedShort(short, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeSignedShort(short value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUnsignedInt(uint, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeUnsignedInt(uint value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSignedBigEndianInt(int, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeSignedBigEndianInt(int value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSignedInt(int, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeSignedInt(int value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUnsignedInt64(ulong, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeUnsignedInt64(uint64 value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeSignedInt64(long, char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeSignedInt64(int64 value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUnsignedVarInt(uint, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeUnsignedVarInt(uint uvalue, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeUnsignedVarInt64(ulong, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeUnsignedVarInt64(uint64 uvalue, char const* docFieldName, char const* docFieldNotes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeVarInt(int, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeVarInt(int value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeVarInt64(long, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeVarInt64(int64 value, char const* docFieldName, char const* docFieldNotes);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeDouble(double, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeDouble(double value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeFloat(float, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeFloat(float value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeFixedFloat(float, char const*, char const*, double);
#else // @header-generator platform
    MCAPI void $writeFixedFloat(float value, char const* docFieldName, char const* docFieldNotes, double size);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeNormalizedFloat(float, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeNormalizedFloat(float value, char const* docFieldName, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeString(std::string_view, char const*, char const*);
#else // @header-generator platform
    MCAPI void $writeString(::std::string_view value, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeIf(
        bool,
#else // @header-generator platform
    MCAPI void $writeIf(
        bool controlValue,
#endif // @header-generator platform
        char const*,
#if defined(LL_PLAT_A) // @header-generator platform
        ::brstd::function_ref<void(BinaryStream&)> const&,
        std::optional<brstd::function_ref<void(BinaryStream&), void(BinaryStream&)>> const&
#else // @header-generator platform
        ::brstd::function_ref<void(::BinaryStream&)> const&                  writeIfTrue,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeIfFalse
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeConditional(
        char const*,
        std::initializer_list<BinaryStream::ConditionBlock>&&,
        std::optional<brstd::function_ref<void(BinaryStream&), void(BinaryStream&)>> const&
#else // @header-generator platform
    MCAPI void $writeConditional(
        char const*                                                          docFieldName,
        ::std::initializer_list<::BinaryStream::ConditionBlock>&&            conditions,
        ::std::optional<::brstd::function_ref<void(::BinaryStream&)>> const& writeDefault
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $branchingWrite_DEPRECATED(std::function<void(BinaryStream&, int)>&&, int, std::vector<int> const&, char const*);
#else // @header-generator platform
    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        int,
        int,
        char const*
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $branchingWrite_DEPRECATED(std::function<void(BinaryStream&, int)>&&, int, int, int, char const*);
#else // @header-generator platform
    MCFOLD void $branchingWrite_DEPRECATED(
        ::std::function<void(::BinaryStream&, int)>&& branchWriter,
        int                                           controlValue,
        ::std::vector<int> const&,
        char const*
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $writeTypeBegin_DocHelper(char const*, char const*, char const*);
#else // @header-generator platform
    MCFOLD bool $writeTypeBegin_DocHelper(char const*, char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeTypeEnd_DocHelper();
#else // @header-generator platform
    MCFOLD void $writeTypeEnd_DocHelper();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $writeEnum_DocHelper(char const*, char const*);
#else // @header-generator platform
    MCFOLD void $writeEnum_DocHelper(char const*, char const*);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $_writeArray(std::function<void(BinaryStream&)>&&, std::function<void(BinaryStream&)>&&, char const*, char const*);
#else // @header-generator platform
    MCAPI void $_writeArray(
        ::std::function<void(::BinaryStream&)>&& sizeWriter,
        ::std::function<void(::BinaryStream&)>&& writer,
        char const*,
        char const*
    );


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
