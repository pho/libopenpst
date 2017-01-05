/**
* LICENSE PLACEHOLDER
*
* @file generic_serial.h
* @class GenericSerial
* @package libopenpst
* @brief A generic serial interface
*
* @author Gassan Idriss <ghassani@gmail.com>
*/
#pragma once

#include "definitions.h"
#include "serial/serial.h"
#include "util/hexdump.h"
#include <iostream>
#include <fstream>

/**
* GenericSerial
*/
namespace OpenPST {
	namespace Serial {


		class GenericSerial : public serial::Serial {

		public:
			/**
			* @brief GenericSerial
			*
			* @param std::string port
			* @param int baudrate
			* @param serial::Timeout - Timeout, defaults to 1000ms
			*/
			GenericSerial(std::string port, int baudrate = 115200, serial::Timeout timeout = serial::Timeout::simpleTimeout(1000));

			/**
			* @brief ~GenericSerial
			*/
			~GenericSerial();

			/**
			* @brief write
			* @overload Serial:: write(uint8_t *data, size_t size)
			* @return size_t
			*/
			size_t write(uint8_t *data, size_t size);

			/**
			* @brief read
			* @overload Serial::read(uint8_t *buf, size_t size)
			* @return size_t
			*/
			size_t read(uint8_t *buf, size_t size);

			/**
			* @brief write
			* @overload Serial::write(std::vector<uint8_t> &data)
			* @return size_t
			*/
			size_t write(std::vector<uint8_t> &data);

			/**
			* @brief read
			* @overload Serial::read(std::vector<uint8_t> &buffer, size_t size)
			* @return size_t
			*/
			size_t read(std::vector<uint8_t> &buffer, size_t size);
		};
	}
}
