/**
 * @file Variant Data type
 */

/*
 *  FastCSIM Copyright (C) 2021 cassuto
 *  This project is free edition{} you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public             
 *  License(GPL) as published by the Free Software Foundation{} either      
 *  version 2.1 of the License, or (at your option) any later version.     
 *                                                                         
 *  This project is distributed in the hope that it will be useful,        
 *  but WITHOUT ANY WARRANTY{} without even the implied warranty of         
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      
 *  Lesser General Public License for more details.                        
 */

#include <cassert>
#include "csim/Variant.h"

namespace csim
{

    Variant::Variant(VariantType type)
    {
        m_type = type;
    }

    /**
     *  Setters
     */
    void Variant::setU8(uint8_t u8)
    {
        assert(m_type == VariantUint8);
        m_dat.u8 = u8;
    }
    void Variant::setU16(uint16_t u16)
    {
        assert(m_type == VariantUint16);
        m_dat.u16 = u16;
    }
    void Variant::setU32(uint32_t u32)
    {
        assert(m_type == VariantUint32);
        m_dat.u32 = u32;
    }
    void Variant::setU64(uint64_t u64)
    {
        assert(m_type == VariantUint64);
        m_dat.u64 = u64;
    }
    void Variant::setI8(int8_t i8)
    {
        assert(m_type == VariantInt8);
        m_dat.i8 = i8;
    }
    void Variant::setI16(int16_t i16)
    {
        assert(m_type == VariantInt16);
        m_dat.i16 = i16;
    }
    void Variant::setI32(int32_t i32)
    {
        assert(m_type == VariantInt32);
        m_dat.i32 = i32;
    }
    void Variant::setI64(int64_t i64)
    {
        assert(m_type == VariantInt64);
        m_dat.i64 = i64;
    }
    void Variant::setFloat(float f)
    {
        assert(m_type == VariantFloat);
        m_dat.f = f;
    }
    void Variant::setDouble(double d)
    {
        assert(m_type == VariantDouble);
        m_dat.d = d;
    }
    void Variant::setBoolean(bool b)
    {
        assert(m_type == VariantBoolean);
        m_dat.b = b;
    }
    void Variant::setString(const char *str)
    {
        assert(m_type == VariantString);
        m_str = str;
    }

    /**
     * Getters
     */
    uint8_t Variant::getU8()
    {
        assert(m_type == VariantUint8);
        return m_dat.u8;
    }
    uint16_t Variant::getU16()
    {
        assert(m_type == VariantUint16);
        return m_dat.u16;
    }
    uint32_t Variant::getU32()
    {
        assert(m_type == VariantUint32);
        return m_dat.u32;
    }
    uint64_t Variant::getU64()
    {
        assert(m_type == VariantUint64);
        return m_dat.u64;
    }
    int8_t Variant::getI8()
    {
        assert(m_type == VariantInt8);
        return m_dat.i8;
    }
    int16_t Variant::getI16()
    {
        assert(m_type == VariantInt16);
        return m_dat.i16;
    }
    int32_t Variant::getI32()
    {
        assert(m_type == VariantInt32);
        return m_dat.i32;
    }
    int64_t Variant::getI64()
    {
        assert(m_type == VariantInt64);
        return m_dat.i64;
    }
    float Variant::getFloat()
    {
        assert(m_type == VariantFloat);
        return m_dat.f;
    }
    double Variant::getDouble()
    {
        assert(m_type == VariantDouble);
        return m_dat.d;
    }
    bool Variant::getBoolean()
    {
        assert(m_type == VariantBoolean);
        return m_dat.b;
    }
    const char *Variant::getString()
    {
        assert(m_type == VariantString);
        return m_str.c_str();
    }
}
