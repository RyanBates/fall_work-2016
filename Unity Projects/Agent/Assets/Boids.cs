using UnityEngine;
using System.Collections;
using System;

public class Boids : MonoBehaviour
{


    private float m_maxSpeed { get; set; }
    private float m_Velocity { get; set; }
    private float m_mass { get; set; }

    public float mass()
    {
        get{ return m_mass; }
        set{ m_mass = value; }
    }

    public float velocity()
    { 
        get{ return m_Velocity; }
        set{ m_Velocity = value; }
    }

    public float maxSpeed()
    {
        get{ return m_maxSpeed; }
        set{ m_maxSpeed = value; }
    }

    // Use this for initialization
    void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
