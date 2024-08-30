/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinujte <chinujte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 16:05:15 by chinujte          #+#    #+#             */
/*   Updated: 2024/08/30 20:01:14 by chinujte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	/* ประกาศตัวชี้ชั่วคราว 2 ตัวสำหรับ src และ dst */
    /* ประกาศตัวนับ */
    /* ตรวจสอบว่าทั้ง src และ dst เป็นค่า NULL หรือไม่ */
    /* ทำให้ตัวชี้ tmp ของ dst เท่ากับ dst ที่แปลงเป็น char * */
    /* ทำให้ตัวชี้ tmp ของ src เท่ากับ src ที่แปลงเป็น char * */
    /* ถ้า src และ dst ทับซ้อนกัน */
    /* วนซ้ำในขณะที่ len มากกว่า 0 และคัดลอก src ลงใน dst */
    /* ถ้า src และ dst ไม่ทับซ้อนกัน */
    /* วนซ้ำในขณะที่ตัวนับของเราน้อยกว่า len และคัดลอก src ลงใน dst */
    /* คืนค่า dst */
}
