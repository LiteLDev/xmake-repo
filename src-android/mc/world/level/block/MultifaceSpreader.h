#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IBlockWorldGenAPI;
// clang-format on

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types define
    enum class SpreadType : uchar {
        SamePosition = 0,
        SamePlane    = 1,
        WrapAround   = 2,
    };

    using SpreadTypes = std::vector<MultifaceSpreader::SpreadType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<MultifaceSpreader::SpreadType>> mSpreadTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceSpreader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultifaceSpreader();

    virtual bool _canSpreadFrom(::Block const&, uchar const) const;

    virtual bool _canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    virtual bool _isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultifaceSpreader(std::vector<MultifaceSpreader::SpreadType> const&);

    MCNAPI std::optional<std::pair<const BlockPos, const uchar>> getSpreadFromFaceTowardDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const,
        uchar const
    ) const;

    MCNAPI int spreadFromAllFacesTowardAllDirections(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&
    ) const;

    MCNAPI int spreadFromFaceTowardAllDirections(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const
    ) const;

    MCNAPI bool spreadFromFaceTowardDirection(
        ::BlockSource&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const,
        uchar const
    ) const;

    MCNAPI bool spreadFromFaceTowardRandomDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&,
        uchar const
    ) const;

    MCNAPI bool spreadFromRandomFaceTowardRandomDirection(
        ::IBlockWorldGenAPI&,
        ::Block const&,
        ::Block const&,
        ::BlockPos const&
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::vector<MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();

    MCNAPI static std::vector<MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<MultifaceSpreader::SpreadType> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_canSpreadFrom(::Block const&, uchar const) const;

    MCNAPI bool $_canSpreadInto(::IBlockWorldGenAPI&, ::Block const&, ::BlockPos const&, uchar const) const;

    MCNAPI bool $_isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
