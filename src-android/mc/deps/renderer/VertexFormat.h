#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/renderer/VertexField.h"
#include "mc/deps/renderer/VertexFieldType.h"

namespace mce {

class VertexFormat {
public:
    // VertexFormat inner types declare
    // clang-format off
    struct FieldOffset;
    // clang-format on

    // VertexFormat inner types define
    struct FieldOffset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort> mOffset;
        ::ll::TypedStorage<2, 2, ushort> mSize;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>       fieldMask;
    ::ll::UntypedStorage<2, 30>      _fieldOffset;
    ::ll::TypedStorage<2, 2, ushort> vertexSize;
    ::ll::TypedStorage<1, 1, bool>   allowHalfFloats;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void disableHalfFloats();

    MCNAPI ::mce::VertexFormat::FieldOffset enableField(::mce::VertexField);

    MCNAPI ushort getFieldOffset(::mce::VertexField) const;

    MCNAPI ushort getFieldSize(::mce::VertexField const) const;

    MCNAPI ::mce::VertexFieldType getFieldType(::mce::VertexField) const;

    MCNAPI ushort getVertexSize() const;

    MCNAPI bool halfFloatsDisabled() const;

    MCNAPI bool isValid() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static uchar getFieldElementCount(::mce::VertexField const, bool);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::VertexFormat const& EMPTY();
    // NOLINTEND
};

} // namespace mce
