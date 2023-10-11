#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

def main(args=None):
    rclpy.init(args=args)
    node = Node("py_test") #創node名稱
    rclpy.shutdown() #關閉

    
if __name__ == "main":
    main()
